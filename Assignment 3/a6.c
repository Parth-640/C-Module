#include<stdio.h>

int main(){

	int num,i=1;
	printf("Enter the num : " );
	scanf("%d",&num);

	printf("All factor: ");
	
	while(i<=num/2){

		if(num%i==0)
			printf("%-3d",i);
		i++;

	}
	printf("\n");


	return 0;


}
