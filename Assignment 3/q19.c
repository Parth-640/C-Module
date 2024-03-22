#include<stdio.h>

int main(){

	int n,n1;
	printf("enter the number range to print tables: ");
	scanf("%d%d",&n,&n1);
	for(int r=1;r<11;r++){
		for(int j=n;j<=n1;j++){
			printf("%-4d ",r*j);
		}
		printf("\n");
		
	}


	return 0;

}
