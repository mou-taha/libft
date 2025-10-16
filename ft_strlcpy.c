#include<string.h>

char *ft_strlcpy(char *dest,const char *src,size_t size)
{
    int len =0 ;
    while (dest[len])
        len++;
    if(size > len)
        return dest;
    
}