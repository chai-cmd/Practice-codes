/**Apply array manipulation techniques to construct a C program that reverses the elements of a one-dimensional array in
 place without using any auxiliary array.**/
#include <stdio.h>
int main()
{
    int n, i, temp, a[100];
    printf("Enter the number of  elements of the array:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    printf("The reversed array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}