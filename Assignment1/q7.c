#include<stdio.h>
int main(){

	int n,a,b,c,d,temp;

	printf("Enter the number : ");
	scanf("%d",&n);

	temp=n;

	a = n%10;
	n=n/10;

	b=n%10;
	n=n/10;

	c=n%10;
	n=n/10;

	d=n;

	printf("%d %d %d %d\n",d,c,b,a);
	printf("%d = %d + %d + %d + %d\n",temp,d*1000, c*100,b*10,a*1);
	printf("%d %d %d %d\n",a,b,c,d);


	return 0;
}
