#include<stdio.h>

int main(){

	int dd,mm,yy,day;

	printf("enter the date dd/mm/yyyy : ");
	scanf("%d %d %d",&dd,&mm,&yy);

	day = (dd + (13*(mm+1)/5) + (yy%100) + ((yy%100)/4) + ((yy/100)/4)+5*(yy/100)) %7;

	switch(day){

		case 0: printf("The day is Saturday\n");
			break;
		case 1: printf("The day is Sunday\n");
			break;
		case 2: printf("The day is Monday\n");
			break;
		case 3: printf("The day is Tuesday\n");
			break;
		case 4: printf("The day is Wednesday\n");
			break;
		case 5: printf("The day is Thursday\n");
			break;
		case 6: printf("The day is Friday\n");
			break;
	}


	return 0;

}
