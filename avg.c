#include<stdio.h>

    float average(int a, int b, int c);
    return (a+b+c)/3.0;

    int main(){
        int a, b, c;
        printf("Enter the three numbers:\n");
        scanf("%d %d %d", &a, &b, &c);

        printf("The average value is: %.2f\n", average(a,b,c));
        return 0;  
    }        
    
