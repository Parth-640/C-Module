#include<stdio.h>

int main(){

	int a,res;

	printf("enter the number : ");
	scanf("%d",&a);

	res = a%2;

	if(res == 0){
		printf("it is even number\n");
	}
	else{
		printf("it is odd number\n");
	}
	return 0;

}
