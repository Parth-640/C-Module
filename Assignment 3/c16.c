#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int guess,chance=10,value,max=1000;
	srand(time(0));
	value = rand() % max +1;
	printf("Only 10 chance will be given\n");

	do{

		printf("Guess the number : ");
		scanf("%d",&guess);

		if(guess==value){
			printf("Congrats! you won\n");
			break;
		}
		else if(guess<value)
			printf("**left**\n");
		else
			printf("**Right**\n");

		chance--;
		printf("Chances left : %d\n",chance);

	}while(chance>=1);

	if(chance == 0)
		printf("The number is %d\n",value);


	return 0;

}

