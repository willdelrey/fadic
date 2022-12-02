#include <stdio.h>

long triang(long number);

int main(void)
{

    int i, num;
    printf("digite um valor: ");
    scanf("%d", &num);

    for (i = 0; i <= num; i++)
    {
        printf ("%2d = %1d\n", i, triang(i));
    }

    return 0;
}
long triang(long number)
{
    if (number <= 1)
    {
        return 1;
    }
    else
    {
        return (number + triang(number - 1));
    }
}