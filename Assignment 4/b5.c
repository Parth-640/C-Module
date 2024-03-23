#include<stdio.h>
void binary(int n);
int main(){
	int num;
	printf("Enter the decimal number : ");
	scanf("%d",&num);

	binary(num);

	return 0;
}

void binary(int n){
	if(n>1)
		binary(n/2);
	printf("%d ",n%2);

}
