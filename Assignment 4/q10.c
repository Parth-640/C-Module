#include<stdio.h>
int check_year(int );
void check_month(int ,int );
int main(){
	int year,month,n;
	printf("Enter the year : ");
	scanf("%d",&year);

	printf("enter the month : ");
	scanf("%d",&month);

	n = check_year(year);

	if(n)
		printf("%d is leap year \n",year);
	else
		printf("%d is not leap year \n",year);
	
	check_month(month,n);
}

int check_year(int year){
	if(year%4==0 && year%100!=0 || year%400==0)
		return 1;
	else 
		return 0;
}
void check_month(int m,int n){
	if(n==1 && m==1 ||m==3 ||m==5 ||m==7 ||m==8 ||m==10 ||m==12 ){
		printf("In this month 31 days\n");
	}
	else if(n==1 && m==4 ||m==6 ||m==9 ||m==11 ){
		printf("In this month 30 days\n");
	}
	else if(n==1 && m==2){
		printf("In this month 29 days\n");
	}
	else if(n==0 && m==1 ||m==3 ||m==5 ||m==7 ||m==8 ||m==10 ||m==12 ){
		printf("In this month 31 days\n");
	}
	else if(n==1 && m==4 ||m==6 ||m==9 ||m==11 ){
		printf("In this month 30 days\n");
	}
	else
		printf("In this month 28 days\n");
}
