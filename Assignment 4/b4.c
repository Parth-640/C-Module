#include<stdio.h>
int fibo(int n);
int main(){


}

int fibo(int n1,int n2,int term,int sum){
	if(term!=0){
		return fibo(n1=n2,n2=sum,term-1,n1+n2);
	}

}
