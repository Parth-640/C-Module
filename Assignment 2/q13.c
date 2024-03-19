#include<stdio.h>

int main(){

	float x,y;
	printf("Enter the values of X and Y : ");
	scanf("%f%f",&x,&y);

	if(x>0 && y>0){
		printf("Poiints lies in quandreant 1\n");
	}
	else if(x<0 && y>0){
		printf("Points lies in quandrant 2\n");
	}
	else if(x<0 && y<0){
		printf("Points lies in quandrant 3\n");
	}
	else if(x>0 && y<0){
		printf("Points lies in quandrant 4\n");
	}
	else{
		printf("Points lies in origin\n");
	}




}
