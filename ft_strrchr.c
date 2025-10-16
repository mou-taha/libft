#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
    const char *last = NULL;

    while (*s)
    {
        if (*s == (char)c)
            last = s;
        s++;
    }

    if (c == '\0')
        return (char *)s;

    return (char *)last;
}


int main(void)
{
    const char *text = "Hello, World!";
    int ch;

    printf("String: \"%s\"\n\n", text);

    // Normal test
    ch = 'l';
    printf("Testing with '%c'\n", ch);
    printf("ft_strchar: %s\n", ft_strrchr(text, ch));
    printf("strchr:     %s\n\n", strrchr(text, ch));
    return 0;
}
