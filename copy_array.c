// C program to create two arrays of size n and copy the elemnts of one array to another array
#include <stdio.h>
int main()
{
    int n, i, a[100], b[100];
    printf("Enter the number of elements if the array:\n");
    scanf("%d", &n);

    printf("Enter the elemnts:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        b[i] = a[i];

        printf(" %d ", b[i]);
    }

    return 0;
}
