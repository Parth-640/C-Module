#include<stdio.h>
void power(int, int);
int main(){
	int n1,n2;
	printf("enter the number and power : ");
	scanf("%d%d",&n1,&n2);

	power(n1,n2);
	
	return 0;
}

void power(int n1,int n2){
	int sum=1;
	for(int i=n2;i>=1;i--){
		sum *= n1;		
	}
	printf("Power of %d^%d : %d\n",n1,n2,sum); 

}
