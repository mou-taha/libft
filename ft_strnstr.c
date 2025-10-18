#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *big, const char *little, unsigned int len)
{
    int i;
    int j;

    if (!*little)
        return (char *)big;

    while (big[i] && i < len)
    {
        j = 0;
        while (big[i + j] == little[j] && (i + j) < len)
        {
            j++;
            if (little[j] == '\0')
                return (char *)&big[i];
        }
        i++;
    }
    return NULL;
}

int main(void)
{
    const char *largestring = "maflb flo p";
    const char *smallstring = "flo";
    char *ptr;

    ptr = ft_strnstr(largestring, smallstring, 10);
    printf("%s\n", ptr);
    return 0;
}