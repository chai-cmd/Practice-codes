#include <stdio.h>
int main()
{
    int a, i;
    int isPrime = 1;

    printf("Enter the digit:\n");
    scanf("%d", &a);

    if (a < 2)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
    {
        printf("%d is prime\n", a);
    }
    else
    {
        printf("%d is not prime\n", a);
    }

    return 0;
}
