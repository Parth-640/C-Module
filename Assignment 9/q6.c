#include<stdio.h>
#include<string.h>
typedef enum standard{ FIRST=1, SECOND, THIRD, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, ELEVEN, TWELVE} std_t;
typedef struct student
{
	char name[20];
	char add[20];
	int rollno;
	std_t std;
	float marks;
}stud_t;

const char *file = "student.txt";

void accept_stud(stud_t *s1);
void add_stud(stud_t *s1);
void print_stud(stud_t *s1);
void stud_display();
void stud_search_rollno(int rollno);
void stud_search_name(char *name);
void edit_stud(char *name,float u_marks);
void delete_stud(int rollno);
char *get_std(std_t std);

int main(){

	stud_t s1;
	int choice,srch,rollNo;
	float u_marks;
	char name[20];

	do{
		printf("------------------------\n");
		printf("Student record file\n");
		printf("0. Exit\n");
		printf("1. Add student\n");
		printf("2. Display student records\n");
		printf("3. Search student in records\n");
		printf("4. Edit student record\n");
		printf("5. Delete student record\n");
		printf("choose from above : ");
		scanf("%d",&choice);
		printf("--------------------------\n");

		switch(choice){
			case 1: 
				accept_stud(&s1);
				add_stud(&s1);
				break;

			case 2: 
				stud_display();
				break;

			case 3:
				printf("How do you want to search student : \n");
				printf("1. By Rollno.\n");
				printf("2. By Name\n");
				scanf("%d",&srch);
				switch(srch){
					case 1 : 
						printf("Enter the roll no. to search student : ");
						scanf("%d",&rollNo);
						stud_search_rollno(rollNo);
						break;

					case 2 :
						printf("Enter the name to search student : ");
						scanf("%s",name);
						stud_search_name(name);
						break;
				}
				break;

			case 4:
				printf("Enter student name to edit his record : ");
				scanf("%s",name);
				printf("Enter the new marks of the student : ");
				scanf("%f",&u_marks);
				edit_stud(name,u_marks);
				break;

			case 5: 
				printf("Enter the rollno of student to delete his record : ");
				scanf("%d",&rollNo);
				delete_stud(rollNo);
				break;
		}

	}while(choice!=0);
	return 0;
}

char *get_std(std_t std){
	switch(std){
		case 1: return "First";
		case 2: return "Two";
		case 3: return "Third";
		case 4: return "Four";
		case 5: return "Five";
		case 6: return "Six";
		case 7: return "Seven";
		case 8: return "Eight";
		case 9: return "Nine";
		case 10: return "Ten";
		case 11: return "Eleven";
		case 12: return "Twelve";
	}
}
void accept_stud(stud_t *s1){
	printf("Enter student name, address, rollno, std, marks : ");
	scanf("%s %s %d %d %f",s1->name,s1->add,&s1->rollno, (int*)&s1->std,&s1->marks);
}

void add_stud(stud_t *s1){

	FILE *fp = fopen(file,"ab");
	fwrite(s1,sizeof(stud_t),1,fp);
	fclose(fp);
	printf("student added\n");
}

void print_stud(stud_t *s1){
	printf("Name: %-10s  Add.: %-10s Rollno.: %-5d Std: %-10s Marks: %-5.2f\n",s1->name,s1->add,s1->rollno,get_std(s1->std),s1->marks);
}

void stud_display(){
	
	FILE *fp= fopen(file,"rb");
	stud_t s1;
	printf("All student : \n");
	while(fread(&s1,sizeof(stud_t),1,fp) != 0){
		print_stud(&s1);
	}
	fclose(fp);
}

void stud_search_rollno(int rollno){
	FILE *fp = fopen(file,"rb");
	stud_t s1;
	while(fread(&s1,sizeof(stud_t),1,fp) != 0){
		if(rollno==s1.rollno){
			print_stud(&s1);
			break;
		}
	}
	fclose(fp);
}

void stud_search_name(char *name){
	FILE *fp = fopen(file,"rb");
	stud_t s1;
	while(fread(&s1,sizeof(stud_t),1,fp) != 0){
		if( ! strcmp( name, s1.name) ) {
			print_stud(&s1);
			break;
		}
	}
	fclose(fp);
}

void edit_stud(char *name,float u_marks){
	FILE *fp = fopen(file,"rb+");

	stud_t s1;
	while( fread(&s1,sizeof(stud_t),1,fp) != 0){
		if( ! strcmp(name,s1.name)){
			s1.marks= u_marks;
			fseek(fp, -sizeof(stud_t), SEEK_CUR);
			fwrite(&s1,sizeof(stud_t),1,fp);
			break;
		}
	}
	fclose(fp);
}

void delete_stud(int rollno){
	FILE *fp = fopen(file,"rb");
	FILE *tfp = fopen("temp.txt","wb");
	stud_t s1;

	while( fread(&s1,sizeof(stud_t),1,fp) != 0){
		if(rollno != s1.rollno){//aside from the student who is going deleted other are copy to temp.txt file then rename the temp.txt to original
			fwrite(&s1,sizeof(stud_t),1,tfp);
		}
	}
	fclose(tfp);
	fclose(fp);
	rename("temp.txt",file);
}
