#include<stdio.h>

int main(){

	int a;

	printf("enter the number: ");
	scanf("%d",&a);

	if(a >= 1){
		printf("%d is positive number\n",a);
	}
	else if(a <= -1){
		printf("%d is negitive number\n",a);
	}
	else{
		printf("%d is zero\n",a);
	}



	return 0;
}
