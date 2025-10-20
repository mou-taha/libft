#include "libft.h"

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

// int main(void)
// {
//     char s[13] = "hello world!";
//     char *res;

//     res = ft_substr(s, 2, 5);
//     printf("result : %s\n", res);

//     free(res); // always free what you malloc
//     return 0;
// }
