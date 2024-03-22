#include<stdio.h>

int main(){
	int num,flag;
	printf("enter the number : ");
	scanf("%d",&num);

	for(int i=num; i<100; i++){
		for(int j=2;j<i;j++){
			//for(int k=1;k<=5;k++){
				if(i%j==0)
					flag=0;
				else
					flag=1;

				if(flag)
					printf("%d ",i);
			//}
		}
	}

	return 0;
}
