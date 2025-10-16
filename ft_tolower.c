#include <stdio.h>

int ft_tolower(int c)
{
    if (!(c >= 64 && c <= 90))
        return c;
    return (c + 32);
}

int main()
{
    char src = '0';

    char r = ft_tolower(src);

    printf("result : %c\n", r);
    return (0);
}