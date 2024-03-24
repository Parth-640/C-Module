#include<stdio.h>

void fibo(int );
int main(){
	int n;
	printf("Enter the number of term to print : ");
	scanf("%d",&n);

	fibo(n);
	return 0;
}

void fibo(int n){
	int sum;
	int n1=0,n2=1;
	printf(" %d ",n2);
	for(int i=1;i<n;i++){
		sum = n1 + n2;
		n1=n2;
		n2=sum;
		printf("%d ",sum);
	}
	printf("\n");
}
