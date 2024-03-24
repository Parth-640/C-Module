#include<stdio.h>

int cal(int , int , char);
int main(){
	int n1,n2,sum;
	char ch;

	printf("Enter two number : ");
	scanf("%d%d",&n1,&n2);

	printf("Choose the operation '+','-','*','/': ");
	scanf("%*c%c",&ch);
	
	sum = cal(n1,n2,ch);
	printf("Answer : %d\n",sum);
}

int cal(int n1,int n2, char ch){

	switch(ch){
		case '+' : return n1 + n2;
		case '-' : return n1 - n2;
		case '*' : return n1 * n2;
		case '/' : return n1 / n2;
	}

}
