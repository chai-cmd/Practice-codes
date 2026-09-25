// Develop a C program that reads n integers into an array and stores the odd and even elements in two separate arrays.
#include <stdio.h>
int main()
{
    int n, i, j = 0, k = 0;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    int a[n], odd[n], even[n];

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[j] = a[i];
            j++;
        }
        else
        {
            odd[k] = a[i];
            k++;
        }
    }

    printf("Even elements are:\n");
    for (i = 0; i < j; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nOdd elements are:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}