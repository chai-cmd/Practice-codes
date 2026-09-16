#include<stdio.h>

int main(){
    int a,b;
    printf("Please enter the value of a&b:");

    scanf("%d", &a);
    scanf("%d", &b);
    
    printf("The value of a and b is: %d\n", a&&b);
    printf("The value of a or b is: %d\n", a||b);
    
if(a&&b){
    printf("Both are true");
}else{
    printf("Both are false");
}
return 0;
}