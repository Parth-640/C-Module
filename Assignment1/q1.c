#include<stdio.h>
int main(){
	
	int a,b;

	printf("Enter two number : ");
	scanf("%d%d",&a,&b);

	int sum,pro,dif;

	sum = a+b;
	pro = a*b;
	dif = a-b;

	printf("sum = %d\n",sum);
	printf("product = %d\n",pro);
	printf("differene = %d\n",dif);
	
	return 0;
}
