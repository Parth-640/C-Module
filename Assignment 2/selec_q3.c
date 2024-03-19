#include<stdio.h>

int main(){
	int emp_id,dep_no;
	char desi;

	printf("Enter your ID and department no. : ");
	scanf("%d%d",&emp_id,&dep_no);

	printf("Enter your designation code : ");
	scanf(" %c",&desi);


	printf("Employee with employee id %d is working in ",emp_id);

	switch(dep_no){

		case 10:printf("""Marketing"" department as ");
				break;
		case 20:printf("""Mangement"" departmnet as ");
				break;
		case 30:printf("""Sales"" department as ");
				break;
		case 40:printf("""Design"" department as ");
				break;
		default:printf("Invalid code ");
	}
	switch(desi){

		case 'M':printf("""Manger\n""");
				break;
		case 'S':printf("""Supervisior\n""");
				break;
		case 's':printf("""Sequrity officer\n""");
				break;
		case 'C':printf("""Cleak\n""");
				break;
		defalut : printf("Invalid designation\n");

	}
	return 0;
}
