#include<stdio.h>

int main(){

	int n,sum=1;
	printf("Enter the number for factorial : ");
	scanf("%d",&n);

	for(int i=n; i>=1;i--){
		sum *= i;

	}
	printf("factorial : %d\n",sum);


}
