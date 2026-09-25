/**Employ the Linear Search technique to construct a C program that searches for a target value in an array and displays the
index of its first occurrence or an appropriate message if the element is not found.(using linear search)**/
#include <stdio.h>
int main()
{
    int n, i, target, a[100], found = 0;
    printf("Enter the elements of the array");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the target value to search:\n");
    scanf("%d", &target);
    for(i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            printf("The target value %d is found at index %d\n", target, i);
            found = 1;
            break;
        }
    }
}