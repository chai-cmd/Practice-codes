//Implement a C program to reverse the digits of a given integer.

#include<stdio.h>
int main(){
    int n, reverse =0, digit; 
    printf("Enter the number:\n");
    scanf("%d", &n);

    while(n !=0){
       digit = n %10; 
       reverse = reverse *10 + digit;
       n/=10;}
       printf("The reverse of the number is: %d", reverse);
       return 0;












    }
