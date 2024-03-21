#include<stdio.h>

int main(){

	int num,n1=0,n2=1,sum;
	printf("Enter the number of terms for fibonacci series: ");
	scanf("%d",&num);
	
	printf("Output: %-3d",n2);
	for(int i=1;i<=num-1;i++){
		sum= n1+n2;
		n1=n2;
		n2=sum;
		printf("%-3d",sum);
	}
	printf("\n");
	return 0;
}
