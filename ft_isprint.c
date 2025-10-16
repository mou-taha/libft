#include <stdio.h>
int    ft_isprint(int c)
{
    if(c>=33 && c<=126)
        return (1);
    return (0);
}

int main()
{
    printf("%d\n",ft_isprint('5'));
    printf("%d\n",ft_isprint(' '));
    return (0);
}