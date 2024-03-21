#include<stdio.h>

int main(){
	int n1,n2,sum;
	char opr,ch;
	do{
		printf("Enter the first number : ");
		scanf("%d",&n1);
		printf("enter the operator : ");
		scanf("%*c%c",&opr);
END:	printf("Enter the second number :");
		scanf("%d",&n2);



		switch(opr){
			case '+' : sum = n1 + n2;
					printf("result : %d\n",sum);
					break;
			
			case '-' : sum = n1 - n2;
					printf("result : %d\n",sum);
					break;
			
			case '*' : sum = n1 * n2;
					printf("result : %d\n",sum);
					break;


			case '/' : 
						if(n2==0){
							printf("can't divide by 0\n");
							goto END;
						}
						else{
							sum = n1 / n2;
							printf("result : %d\n",sum);
						}
					break;

			default : printf("Invalid operator\n");		

		}
		
		printf("Do you want to continue : (y/n) ");
		scanf("%*c%c",&ch);
	}while(ch!='n');
	
	printf("You have exited\n");
	return 0;
}
