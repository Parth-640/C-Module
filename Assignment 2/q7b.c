#include<stdio.h>

int main(){

	int n;
	printf("Enter the year : ");
	scanf("%d",&n);
	
	if(n%4==0 && n%100 != 0 || n%400==0){
		printf("%d is leap year and in this year days are 366\n",n);
	}
	else{
		printf("%d is not leap year and in this year days are 365\n",n);
	}


	return 0;
}
