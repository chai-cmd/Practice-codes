//Develop a C program to determine the number of digits present in a given integer.

#include<stdio.h>
int main(){
    int n, count =0; 
    printf("Enter the number:\n");
    scanf("%d", &n);

    if(n== 0){
        count =1 ;
    } else{
        while (n != 0){
            n/=10;
            count++;

        }
    }
    printf("Number of digits: %d", count);

    return 0;

 
}