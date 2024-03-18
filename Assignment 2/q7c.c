#include<stdio.h>

int main(){
	int n;
	printf("Enter the year : ");
	scanf("%d",&n);

	(n%4==0 && n%100!=0 || n%400==0) ? printf("%d is leap year and there are 366 days in year\n",n) : printf("%d is not leap year and there are 365 day\n",n);

	return 0;

}
