#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("input a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("The result is %d", sum);

    return 0;
}