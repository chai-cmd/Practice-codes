#include<stdio.h>
int main(){
    float a, ans=1;
    int i,b;
    printf("Enter your digit: \n");
    scanf("%f", &a);
    printf("Enter the exponential power:\n");
    scanf("%d", &b);
    for (i=1; i<=b; i++)
    {
    ans=ans*a;
     }
      printf("The answer is: %f \n", ans);
      return 0;
}