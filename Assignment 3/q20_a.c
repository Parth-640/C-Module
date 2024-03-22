#include <stdio.h>

int main()
{
    int i, j,a;
    printf("Prime numbers from 1 to 100 are\n");
    for (i = 2; i < 100; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                a=0;
                break;
            }
			else{
				a=1;
			}
        }

        if(a)
        {
            printf("%d\n",i);
        }
   }
   return 0;
}
