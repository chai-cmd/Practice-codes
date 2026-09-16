#include <stdio.h>

int main() {
    int a;

    printf("Enter the number you want to divide:\n");
    scanf("%d", &a);

    printf("The remainder when %d is divided by 97 is: %d\n", a, a % 97);

    return 0;
}