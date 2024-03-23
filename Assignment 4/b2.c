#include<stdio.h>
int power(int b, int i){

	if(i==0)
		return 1;
	
	return b * power(b,i-1);


}
int main(){
	int n1,n2;
	printf("Enter the base and power : ");
	scanf("%d%d",&n1,&n2);

	int sum =power(n1,n2);

	printf("%d\n",sum);

}
