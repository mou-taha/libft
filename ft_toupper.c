#include<stdio.h>

int ft_toupper (int c)
{
    if(!(c>=97 && c<=122))
        return c;
    return (c-32);
}

int main()
{
    char src ='z';

    char r=ft_toupper(src);

    printf("result : %c\n", r);
    return (0);
}