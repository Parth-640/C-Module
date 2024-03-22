#include<stdio.h>

int main(){

	int r,c;

	for(r=1;r<6;r++){
		for(c=1;c<=r;c++){
			printf("* ");
		}
		printf("\n");
	}

	printf("\n");

	for(r=5;r!=0;r--){
		for(c=1;c<=r;c++){
			printf("* ");
		}
		printf("\n");
	}
	
	printf("\n");

	for(r=1;r<6;r++){
		for(c=1;c<=r;c++){
			printf("%d ",c);
		}
		printf("\n");
	}

	printf("\n");

	for(r=1;r<6;r++){
		int n=5;
		for(c=1;c<=r;c++){
			printf("%d ",n);
			n--;
		}	
		printf("\n");
	}
	
	printf("\n");
	char ch='A';
	for(r=1;r<5;r++){
		for(c=1;c<=r;c++){
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}

	printf("\n");
	int n=0;
	for(r=4;r!=0;r--){
		char ch='A' + n;
		for(c=1;c<=r;c++){
			printf("%c ",ch);
			ch++;
		}
		n++;
		printf("\n");
	}





	return 0;











}
