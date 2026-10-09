//Implement a C program to compute the sum of the series 1 + 11 + 111 + 1111 + ... for a user-
//specified number of terms.
#include<stdio.h>
int main(){
    int i, n,sum=0, term =1;
    printf("Enter the number of term:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
      sum+= term;
      term =term*10+1;
    }
    printf("The series is: %d", sum);

    return 0;
}