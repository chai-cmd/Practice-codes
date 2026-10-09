//Construct a C program to calculate the sum of the digits of a given integer.


#include<stdio.h>
int main(){
    int n, sum= 0, digit;
    printf("Enter the number:");
    scanf("%d", &n);
    while(n != 0){
        digit = n % 10;
        if(digit < 0){
            digit = -digit;
        }
        sum += digit;
        n /= 10;
    }
printf("The sum of the digits is: %d", sum);
return 0;

} 