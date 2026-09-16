#include <stdio.h>

int main(){
    float bw;

    printf("Enter your body weight in Kilograms:\n");
    scanf("%f", &bw);

    printf("The required protein intake is: %f", bw*2);
return 0;
}