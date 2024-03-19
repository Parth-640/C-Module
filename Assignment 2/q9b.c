#include<stdio.h>

int main(){

	int m,y;
	printf("Enter the month and year : ");
	scanf("%d%d",&m,&y);

	if(y%4==0 && y%100!=0 || y%400==0){
		printf("%d year has 366 days\n",y);
		if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
			printf("Month no. %d has 31 days\n",m);
		}
		else if( m==4 || m==6 || m==9 || m==11){
			printf("Month no. %d has 30 days\n",m);
		}
		else{
			printf("Month no. %d has 29 days\n",m);
		}
	}
	else{
		printf("%d year has 365 days\n",y);
			
		if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
			printf("Month no. %d has 31 days\n",m);
		}
		else if( m==4 || m==6 || m==9 || m==11){
			printf("Month no. %d has 30 days\n",m);
		}
		else{
			printf("Month no. %d has 28 days\n",m);
		}

	}
	
}
