#include<stdio.h>

int main(){

	int n;
	char c;

	printf("Enter the character to print : ");
	scanf("%c",&c);
	printf("Enter the num : ");
	scanf("%d",&n);

	while(n!=0){
		printf("%c ",c);
		n--;
	}
	printf("\n");

	return 0;
}
