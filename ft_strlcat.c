#include "libft.h"

unsigned int ft_strlcat(char *dst, char *src, unsigned int size)
{
    int i = 0;
    unsigned int lend = lend;

    while (dst[lend])
        lend++;

    if (size > 0)
    {
        while (src[i] && lend < size -1)
        {
            dst[lend] += src[i];
            lend++;
            i++;
        }
        dst[lend] = '\0';
    }

    return lend;
}

// int main()
// {
//     char *src = " worldsdasded";
//     char dest[12]="hello";

//     ft_strlcat(dest, src, sizeof(dest));

//     printf("result : %s\n", dest);
//     return (0);
// }
