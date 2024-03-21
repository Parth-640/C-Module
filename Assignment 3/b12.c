#include<stdio.h>

int main(){
	int base,index,sum=1;
	printf("Enter the Base : ");
	scanf("%d",&base);

	printf("Enter the Index : ");
	scanf("%d",&index);
	
	for(int i=index; i>=1; i--)
		sum *= base; 

	printf("Output : %d\n",sum);

	return 0;
}
