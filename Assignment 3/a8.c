#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Enter the number : ");
    scanf("%d", &a);
    printf("The factors of %d is ", a);
    b = 2;
    d = 2;
    while (a > 1)
    {
        c = a % b;
        if (c == 0)
        {
            printf("%d ", b);
            a=a/b;
        }
        else
        {
            ++b;
        }
    }
	printf("\n");
	return 0;
	
}
