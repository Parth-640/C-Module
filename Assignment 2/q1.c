#include<stdio.h>

int main(){

	int a,b,res;

	printf("enter two numbers : ");
	scanf("%d%d",&a,&b);

	if(b == 0){
		
		printf("can't divided by zero\n");

	}
	
	res = a/b;
	printf("divison : %d\n",res);









	return 0;
}
