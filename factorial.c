//onstruct a C program to compute the factorial of a given non-negative integer.

#include<stdio.h>
int main(){
    int i, n, fact=1;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        fact= fact*i;

    }
printf("Factorial is: %d", fact);
return 0;
}