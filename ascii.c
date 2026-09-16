// ascii values

#include <stdio.h>
int main()
{
    char ch;
    printf("Input the character: \n");
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("The character is lower case. \n");
    }
    else
    {
        printf("The character is not lower case.");
    }

    return 0;
}