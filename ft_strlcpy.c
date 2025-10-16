#include <string.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size)
{
    int i = 0;
    int lens = 0;

    while (src[lens])
        lens++;

    if (size > 0)
    {
        while (src[i] && i < size -1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }

    return lens;
}

int main()
{
    char *src = "hello";
    char dest[5];

    ft_strlcpy(dest, src, sizeof(dest));

    printf("result : %d\n", sizeof(dest));
    return (0);
}