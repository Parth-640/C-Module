
#include<stdio.h>

int main(){
	int n,sum=1,i=1;
	printf("Enter the number for factorial : ");
	scanf("%d",&n);
	
	printf("%d",i);
	while(i<=n){
		sum = sum * i;
		i++;
		if(i<=n)
			printf(" * %d",i);
	}
	printf(" = %d\n",sum);


	return 0;
}
