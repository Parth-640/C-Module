#include<stdio.h>

int main(){

	int m,y;
	printf("Enter the month and year : ");
	scanf("%d%d",&m,&y);

	if(y%4==0 && y%100!=0 || y%400==0){
		printf("%d year has 366 days\n",y);

		switch(m){
			case 1: printf("January has 31 days\n");
					break;
			case 2: printf("Feburay has 29 days\n");
					break;
			case 3: printf("March has 31 days\n");
					break;
			case 4: printf("April has 30 days\n");
					break;
			case 5: printf("May has 31 days\n");
					break;
			case 6: printf("June has 30 days\n");
					break;
			case 7: printf("July has 31 days\n");
					break;
			case 8: printf("August has 31 days\n");
					break;
			case 9: printf("Septembar has 30 days\n");
					break;
			case 10: printf("October has 31 days\n");
					break;
			case 11: printf("November has 30 days\n");
					break;
			case 12: printf("December has 31 days\n");
					break;
			default : printf("Enter month is invalid\n");

		}
	}
	else{
		printf("%d year has 365 day\n",y);
		
		switch(m){


			case 1: printf("January has 31 days\n");
					break;
			case 2: printf("Feburay has 28 days\n");
					break;
			case 3: printf("March has 31 days\n");
					break;
			case 4: printf("April has 30 days\n");
					break;
			case 5: printf("May has 31 days\n");
					break;
			case 6: printf("June has 30 days\n");
					break;
			case 7: printf("July has 31 days\n");
					break;
			case 8: printf("August has 31 days\n");
					break;
			case 9: printf("Septembar has 30 days\n");
					break;
			case 10: printf("October has 31 days\n");
					break;
			case 11: printf("November has 30 days\n");
					break;
			case 12: printf("December has 31 days\n");
					break;
			default : printf("Enter month is invalid\n");

		}

	}

	return 0;

}
