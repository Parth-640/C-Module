#include<stdio.h>
void cal(int *,int *,int *, int *);
int main(){
	
	int num1,num2,sum,pro;
	printf("Enter two number : ");
	scanf("%d%d",&num1,&num2);
	
	cal(&num1,&num2,&sum,&pro);

	printf("Sum of %d + %d = %d\n",num1,num2,sum);

	printf("Product of %d * %d = %d\n",num1,num2,pro);
	return 0;
}

void cal(int *n1,int *n2,int *sum,int *pro){

	*sum = *n1 + *n2;
	*pro = *n1 * *n2;
}
