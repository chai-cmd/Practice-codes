/*Develop a C program that uses an integer array to determine and display the total count 
of even numbers and odd numbers stored in the array*/

#include<stdio.h>
int main(){
    int n, i, j, ev_count=0, od_count=0;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);

    int arr[100];
    printf("Enter the elements if the array:\n");

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);

        if (arr[i]%2==0){
            ev_count++;
        }
        else{
            od_count++;
              }


    }

    printf("Even elements: %d\n", ev_count);
    printf("Odd elements: %d\n", od_count);

    return 0;

    }
