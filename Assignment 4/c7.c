#include<stdio.h>
int result;
int cal(int *,int *,int *);
int main(){
	
	int num1,num2,pro;
	printf("Enter two number : ");
	scanf("%d%d",&num1,&num2);
	
	result = cal(&num1,&num2,&pro);

	printf("Sum : %d + %d = %d\n",num1,num2,result);

	printf("Product : %d * %d = %d\n",num1,num2,pro);

	return 0;
}

int cal(int *n1,int *n2,int *pro){
	*pro = *n1 * *n2;

	return *n1 + *n2;
}
