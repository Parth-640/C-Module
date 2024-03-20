#include<stdio.h>

int main(){
	int n,sum=1;
	printf("Enter the to print factorial : ");
	scanf("%d",&n);
	
	printf("%d",n);
	while(n!=0){
		sum = sum * n;
		n--;
			if(n>0)
				printf(" * %d",n);
	}
	printf(" = %d\n",sum);


	return 0;
}
