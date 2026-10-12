/* Develop a modular C program that uses two user-defined functions with parameters and 
return values, where one function computes the sum of the digits of a given integer and 
the other function finds the reverse of the same integer. Display the results returned by 
both functions in the main() function*/

#include<stdio.h>
int sum_digits(int n){
    int sum = 0;
    while (n!=0){
        sum+= n%10;
        n/=10;
    }

        return sum;
    
}

int rev(int n){
    int rev=0;
    while(n!=0){
        rev = rev*10 + n%10;
        n/=10;}

        return rev;
    
}

int main(){
    int num;
    printf("Enter integer:\n");
    scanf("%d", &num);
    int sum = sum_digits(num);
    int reverse = rev(num);
    printf("Sum of digits: %d\n", sum);
    printf("Reverse of the number: %d\n", reverse);

    return 0;
}