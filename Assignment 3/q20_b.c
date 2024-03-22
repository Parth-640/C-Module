#include <stdio.h>

int main()
{
	int num, res, sum, temp;
	printf("The armstrong number from 1 to 500 is \n");

	for (num = 1; num <= 500; num++)
	{
		sum=0;
		temp = num;

		while (temp > 0)
		{
			res = temp % 10; 
			temp = temp / 10;
			sum = sum + (res * res * res);
		}	
		if(sum==num)
			printf("%d\n",num);
	}
	return 0;
}
