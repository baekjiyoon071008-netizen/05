#include <stdio.h>

int main()
{
    char c;
    int num = 0;

    printf("Input a string: ");
    
    while ((c = getchar()) != '\n')
    {
        if (c >= '0' && c <= '9')
           num++;
    }

    printf("The number of digits is %d" , num);

    return 0;
}