#include<stdio.h>

int main(){
	int n,temp,rev=0,rem;
	printf("Enter five digit number : ");
	scanf("%d",&n);

	temp=n;
//12345
	rem=n%10;
	rev= rev *10 + rem;
	n=n/10;

	rem=n%10;
	rev= rev *10 + rem;
	n=n/10;

	rem=n%10;
	rev= rev *10 + rem;
	n=n/10;

	rem=n%10;
	rev= rev *10 + rem;
	n=n/10;

	rem=n%10;
	rev= rev *10 + rem;
	n=n/10;

	if(temp == rev){
		printf("%d is palindrome\n",temp);
	}
	else{
		printf("%d is not palindrome\n",temp);
	}
	return 0;
}
