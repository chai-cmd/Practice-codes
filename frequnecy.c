/*  Implement a C program to count the number of times a user-specified element appears 
in a one-dimensional array and display its frequency.*/

#include<stdio.h>
int main(){
    int n, i, count=0, element;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    int arr[100];
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find its frequency:\n");
    scanf("%d", &element);

    for(i=0; i<n; i++){
        if (arr[i]== element){
            count++;
        }
    }

printf("Frequency of %d in the array is %d", element, count);


return 0;


}
