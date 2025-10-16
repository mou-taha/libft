#include <string.h>
#include <stdio.h>

void    ft_bzero(void *s,size_t n)
{
    int i;

    char *c=(char*)s;
    i = 0;

    while (i<n)
    {
        c[i] = 0;
        i++;
    }
    return;
}

int main() {
    char buffer[10];

    ft_bzero(buffer, sizeof(buffer)); // zero out all 10 bytes

    for (int i = 0; i < 10; i++) {
        printf("%d ", buffer[i]);  // prints 0 0 0 0 0 0 0 0 0 0
    }

    return 0;
}