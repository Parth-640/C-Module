#include<stdio.h>

void fact(int n);
int main(){
	int num;
	printf("Enter the number for factorial : ");
	scanf("%d",&num);

	fact(num);

	return 0;
}

void fact (int n){
	int sum=1;
	for(int i=n;i>=1;i--){
		sum *= i;
	}
	printf("factorial : %d\n",sum);

}
