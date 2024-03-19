#include<stdio.h>

int main(){

	int month,year;

	printf("Enter the month : ");
	scanf("%d",&month);
	printf("Enter the year : ");
	scanf("%d",&year);

	if(year%4==0){
		if(year%100!=0){
			printf("%d year has 366 day\n",year);
		
				if(month==1)
					printf("Januray has 31 days\n");
				else if(month==2)
					printf("Februay has 29 days\n");
				else if(month==3)
					printf("March has 31 days\n");
				else if(month==4)
					printf("April has 30 days\n");
				else if(month==5)
					printf("May has 31 days\n");
				else if(month==6)
					printf("June has 30 days\n");
				else if(month==7)
					printf("July has 31 days\n");
				else if(month==8)
					printf("August has 31 days\n");
				else if(month==9)
					printf("September has 30 days\n");
				else if(month==10)
					printf("October has 31 days\n");
				else if(month==11)
					printf("November has 30 days\n");
				else if(month==12)
					printf("December has 31 days\n");
		}

	}
	if(year%400==0){
		printf("%d year has 366 days\n",year);
		
				if(month==1)
					printf("Januray has 31 days\n");
				else if(month==2)
					printf("Februay has 29 days\n");
				else if(month==3)
					printf("March has 31 days\n");
				else if(month==4)
					printf("April has 30 days\n");
				else if(month==5)
					printf("May has 31 days\n");
				else if(month==6)
					printf("June has 30 days\n");
				else if(month==7)
					printf("July has 31 days\n");
				else if(month==8)
					printf("August has 31 days\n");
				else if(month==9)
					printf("September has 30 days\n");
				else if(month==10)
					printf("October has 31 days\n");
				else if(month==11)
					printf("November has 30 days\n");
				else if(month==12)
					printf("December has 31 days\n");
	}
	else{
		printf("%d year has 365 days\n",year);
		
				if(month==1)
					printf("Januray has 31 days\n");
				else if(month==2)
					printf("Februay has 28 days\n");
				else if(month==3)
					printf("March has 31 days\n");
				else if(month==4)
					printf("April has 30 days\n");
				else if(month==5)
					printf("May has 31 days\n");
				else if(month==6)
					printf("June has 30 days\n");
				else if(month==7)
					printf("July has 31 days\n");
				else if(month==8)
					printf("August has 31 days\n");
				else if(month==9)
					printf("September has 30 days\n");
				else if(month==10)
					printf("October has 31 days\n");
				else if(month==11)
					printf("November has 30 days\n");
				else if(month==12)
					printf("December has 31 days\n");
	}


	return 0;

}
