#include<stdio.h>
int flag;
int cal(int *n1, int *n2, char *ch);
int main(){
	int n1,n2,sum;
	char opr,ch;
	do{
		printf("Enter two number : ");
		scanf("%d%d",&n1,&n2);

		printf("Choose the operation '+','-','*','/': ");
		scanf("%*c%c",&opr);

		sum = cal(&n1,&n2,&opr);
		if(flag==0)
			printf("%d %c %d = %d\n",n1,opr,n2,sum);
		else
			flag=0;
		printf("do you want to continue (y/n) ");
		scanf("%*c%c",&ch);

	}while(ch!='n');

	return 0;
}

int cal(int *n1,int *n2, char *ch){
	int res;
	switch(*ch){
		case '+' : res= *n1 + *n2;
				   break;
		case '-' : res= *n1 - *n2;
				   break;
		case '*' : res= *n1 * *n2;
				   break;
		case '/' :
				   if(n2==0){
					   flag=1;
					   printf("The denominator is zero\n");
				   }
				   else
					   res= *n1 / *n2;
				   break;
		default : printf("Invalid operator\n");
	}

	return res;
}

