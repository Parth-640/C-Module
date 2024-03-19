#include<stdio.h>

int main(){

	char ch;
	printf("Enter the character : ");
	scanf("%c",&ch);

	if(ch>=65 && ch<=90 || ch>=97 && ch<=122){
		if(ch>=65 && ch<=90){
			printf("%c is Uppercase alphabet\n",ch);
		}
		else{
			printf("%c is Lowercase alphabet\n",ch);
		}
	}
	else if(ch>=48 && ch<=57){
		printf("%c is digit\n",ch);
	}
	else if(ch== 32 || ch==9 || ch==13 || ch==10){
		printf("%c is special character\n",ch);
	}
	else {
		printf("%c is other character\n",ch);
	}


	return 0;
}
