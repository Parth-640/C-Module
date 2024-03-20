#include<stdio.h>

int main(){
	int num,sum=0,temp,n,rev=0;
	char ch,c;
Here:

	printf("Enter the number : ");
	scanf("%d",&num);
	printf("The operation :\na. Sum of digit\nb. Reverse number\nc. Number is palindrome or not\nd. Number is armstrong or not\n");
	printf("Choose the Operation : ");
	scanf("%*c%c",&ch);


	switch(ch){

		case 'a':
				temp=num;
				while (temp!=0){
					n = temp % 10;
					sum = sum + n;
					temp = temp / 10;
				}
				printf("Output : %d\n",sum);
				break;
		case 'b':
				temp=num;
				while(temp!=0){
					n = temp % 10;
					rev = rev * 10 + n;
					temp = temp / 10;
				}
				printf("%d number in reverse is :%d\n",num,rev);
				break;
		case 'c':
				temp=num;
				while(temp!=0){
					n = temp % 10;
					rev = rev * 10 + n;
					temp = temp /10;
				}
				if(rev!=num)
					printf("%d number is not palindrome\n",num);
				else
					printf("%d is numeric palindrome\n",num);

				break;
				
		case 'd':
				temp=num;
				sum=0;
				while(temp!=0){
					n = temp % 10;
					sum += n*n*n;
					temp = temp / 10;
				}
				if(sum!=num)
					printf("%d is not armstrong number\n",num);
				else
					printf("%d is armstrong number\n",num);

				break;
		default : printf("invaild operation\n");
	}
	
	printf("Do you want to continue : (y/n)");
	scanf("%*c%c",&c);
	if(c=='y')
		goto Here;

	return 0;
}
