#include<stdio.h>

int main(){

	int a,b,c,d,e;
	printf("Enter the two number to find GCD : ");
	scanf("%d%d",&a,&b);
	d=a;
	e=b;
	
	while(b>0){
		c = a%b;
		printf("%d %% %d = %d\n",a,b,c);
		a=b;
		b=c;
	}
	
	printf("GCD of %d and %d is %d\n",a,b, a);



}
