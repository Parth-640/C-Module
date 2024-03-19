#include<stdio.h>

int main(){

	float a,b;
	char ch;
	printf("Enter two nummber : ");
	scanf("%f%f",&a,&b);

	printf("Choose operator +,-,*,/ : ");
	scanf(" %c",&ch);

	switch(ch){

		case '+' : printf("Sum of %f + %f is : %f\n",a,b,a+b);
				break;

		case '-' : printf("Substraction of %f - %f is : %f\n",a,b,a-b);
				break;

		case '*' : printf("Product of %f * %f is : %f\n",a,b,a*b);
				break;

		case '/' : printf("Difference of %f / %f is : %f\n",a,b,a/b);
				break;
		
		default : printf("invalid operator\n");	
	}
	

	return 0;

}
