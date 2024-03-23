#include<stdio.h>
int fact(int n){
	
	int sum;
	if(n==1)
		return 1;

	return n * fact(n-1);
}
int main(){
	int n,sum;
	printf("Enter the number to find factorial : ");
	scanf("%d",&n);

	sum = fact(n);

	printf("Factorial of %d = %d\n",n,sum);
	return 0;

}
