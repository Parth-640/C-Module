#include<stdio.h>
void hexa(int);
int main(){

	int n;
	printf("Enter decimal number : ");
	scanf("%d",&n);

	hexa(n);
	return 0;
}

void hexa(int n){
	if(n>1)
		hexa(n/16);
	printf("%x ",n%16);

}
