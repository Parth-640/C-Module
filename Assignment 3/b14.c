#include<stdio.h>

int main(){

	int num,flag=0;
	printf("Enter the number : ");
	scanf("%d",&num);

	for(int i=2;i<=num/2;i++)
	{
		if(num%i==0)
			flag=1;
	}

	if(flag==1)
		printf("%d is not prime number\n",num);
	else
		printf("%d is prime number\n",num);

	return 0;
}
