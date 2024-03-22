#include<stdio.h>

int main(){
	int r,c;
	printf("Enter the row and coloum to print pattern\n");
	printf("Enter the row :");
	scanf("%d",&r);
	printf("Enter the coloum :");
	scanf("%d",&c);

	for(int i=0; i<r;i++){
		for(int j=0; j<c;j++){
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;

}
