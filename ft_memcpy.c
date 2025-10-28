#include <stdio.h>
#include <string.h>
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *d = (char*)dest;
    char *s= (char*)src;

    unsigned int i;
    i = 0;
    while (i < n)
    {
        d[i]=s[i];
        i++;
    }
    return dest;
}

// int main() {
//     char src[20] = "Hello, World!";
//     char dest[20];

//     ft_memcpy(dest, src, strlen(src) + 1);  // +1 to copy the null terminator

//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dest);
//     printf("size: %d\n", strlen(src));

//     return 0;
// }
