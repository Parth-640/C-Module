#include<stdio.h>
void swap(int *,int *);
int main(){
	
	int n1,n2;
	printf("Enter two number for swap : ");
	scanf("%d%d",&n1,&n2);
	
	printf("Before swap : n1=%d n2=%d\n",n1,n2);
	swap(&n1,&n2);
	printf("After swap : n1=%d n2=%d\n",n1,n2);

	return 0;
}

void swap(int *n1,int *n2){
	
	int temp=*n1;
	*n1= *n2;
	*n2= temp;
	
}
