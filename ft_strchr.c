#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while (*s && *s != (char)c)
        s++;

    if (*s == (char)c)
        return (char *)s;

    return NULL;
}

// int main(void)
// {
//     const char *text = "Hello, World!";
//     int ch;

//     printf("String: \"%s\"\n\n", text);

//     // Normal test
//     ch = 'o';
//     printf("Testing with '%c'\n", ch);
//     printf("ft_strchar: %s\n", ft_strchr(text, ch));
//     printf("strchr:     %s\n\n", strchr(text, ch));

//     // Character not in string
//     ch = 'x';
//     printf("Testing with '%c'\n", ch);
//     printf("ft_strchr: %s\n", ft_strchr(text, ch) ? "found" : "not found");
//     printf("strchr:     %s\n\n", strchr(text, ch) ? "found" : "not found");

//     // Null terminator test
//     ch = '\0';
//     char *res1 = ft_strchr(text, ch);
//     char *res2 = strchr(text, ch);

//     printf("Testing with '\\0'\n");
//     printf("ft_strchr: returned pointer at offset %ld\n", res1 - text);
//     printf("strchr:     returned pointer at offset %ld\n", res2 - text);

//     // Prove both point to end
//     printf("String length: %zu\n", strlen(text));
//     printf("*ft_strchr = %d\n", *res1);
//     printf("*strchr     = %d\n", *res2);

//     return 0;
// }
