#include<stdio.h>

int next_fibo(int );
int main(){
	int n;
	printf("how many time you want to call function : ");
	scanf("%d",&n);
	
	for(int i=1; i<=n;i++){
		printf("%d ",next_fibo(i));
	}

	printf("\n");

	return 0;
}

int next_fibo(int n){
	int next;
	static int n1=0,n2=1;

	next = n1 + n2;
	n1=n2;
	n2=next;

	return next;
	
	
}
