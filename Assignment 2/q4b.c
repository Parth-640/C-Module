#include<stdio.h>

int main(){

	int a,b;

	printf("enter two number : ");
	scanf("%d%d",&a,&b);

	a>b ? printf("%d is greater\n",a) : printf("%d is greater\n",b);

	return 0;
}
