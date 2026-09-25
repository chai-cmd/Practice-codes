#include<stdio.h>
int main(){

   int count=0, sum=0, i;
   
   for(i=100; i<=200; i++)
   
    {
         if(i%9==0)
         {
              sum=sum+i;
              count++;
         }
    }   
    printf("The sum of all numbers between 100 and 200 which are divisible by 9 is: %d \n", sum);
    printf("The count of all numbers between 100 and 200 which are divisible by 9 is: %d \n", count);
    return 0;
}