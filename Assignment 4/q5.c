#include<stdio.h>

void print_char(char ,int);
int main(){
	int n;
	char ch;
	printf("Enter the character :");
	scanf("%c",&ch);
	printf("How many time do you want to print : ");
	scanf("%d",&n);

	print_char(ch,n);
}

void print_char(char ch,int n){
	for(int i=1;i<=n;i++){
		printf("%-2c",ch);
	}
	printf("\n");
}
