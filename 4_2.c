#include<stdio.h>
int main(){
    int i, n;
    n=10; 
    for(i=10; i; i--){
        printf("%d X %d = %d\n", n, i, n*i);
    }
    return 0;
}