#include<stdio.h>

int is_prime(int );
void prime_range(int ,int );
int main(){
	int num,start,stop,n;
	printf("entet the num : ");
	scanf("%d",&num);

	n=is_prime(num);

	if(n>0)
		printf("%d number is prime\n",num);
	else
		printf("%d is not prime number\n",num);

	
	printf("enter the number to print prime in that range start-end : ");
	scanf("%d%d",&start,&stop);
	
		
	prime_range(start,stop);
	return 0;

}

int is_prime(int n){
	int flag=1;

	for(int i=2;i<=n/2;i++){
		if(n%i==0)
			flag=0;
			break;
	}

	if(flag==1)
		return 1;
	else
		return -1;
	
}

void prime_range(int start, int end){
	printf("Prime number in range %d-%d : ",start,end);
	for(int i=start;i<=end;i++){
		int flag=1;

		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}


		if(flag==1)
			printf("%d ",i);
	}
}
