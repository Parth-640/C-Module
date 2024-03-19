#include<stdio.h>

int main(){

	int n;
	float sum,temp;
	printf("Enter the number of quantity : ");
	scanf("%d",&n);

	if(n>50){
		sum = n * 5;
		temp = sum *  0.15;
		sum = sum - temp;
		printf("After 15%% discount price : %.2f\n",sum); 
	}
	else if(n>30){
		sum = n * 5;
		temp = sum * 0.1;
		sum = sum - temp;
		printf("After 10%% discount price : %.2f\n",sum);
	}
	else{
		printf("No discount avilable\n");
	}


	return 0;
}
