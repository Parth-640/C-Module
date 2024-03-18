#include<stdio.h>

int main(){
	
	int n;
	printf("Enter the year : ");
	scanf("%d",&n);
	
	if(n%4==0){
		if(n%100 != 0){
			printf("%d is leap year\n",n);
		}
	}
	if(n%400==0){
		printf("%d is leap year\n",n);
	}
	else{
		printf("%d is not leap year\n",n);
	}

	return 0;
}
