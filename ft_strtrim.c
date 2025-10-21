#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int ft_strlen(const char *s)
{
    int     i;
    i = 0;
    while(s[i]!='\0')
        i++;
    return (i);
}

int ft_strfind(char const *str, char c)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if(str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void *ft_calloc(unsigned int nmemb, unsigned int size)
{
	void *res;
	unsigned int ttl_bytes;
	unsigned char *r;

	ttl_bytes = nmemb * size;
	if (ttl_bytes ==  0)
		return NULL;

	res = malloc(ttl_bytes);

	if (res != NULL)
	{
		r = (unsigned char *)res;
		while (ttl_bytes > 0)
		{
			ttl_bytes--;
			r[ttl_bytes] = '\0';
		}
	}
	return (res);
}
unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size)
{
    unsigned int i = 0;
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

char *ft_substr(const char *s, unsigned int start,size_t len)
{
	unsigned int	i;
	char	*res;

	i = 0;
	while (i<start)
	{
		s++;
		i++;
	}
	res = ft_calloc(len ,sizeof(char));
	ft_strlcpy(res, s,len+1);//we add 1 beacause strlcpy copie up to (size - 1) and null terminate the result.
	return res;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = ft_strlen(s1) - 1;

	while (ft_strfind(set,s1[i]))
		i++;

	while (ft_strfind(set,s1[j]))
		j--;
	res = ft_substr(s1,i,j-i+1);
	return (res);
}

int main(void)
{
	char const *r="		ahello   * ";
	printf("res :%s\n",ft_strtrim(r," 	*"));
}
