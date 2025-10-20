#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*res;

	size = ft_strlen(s1) + ft_strlen(s2);
	if(size == 0)
		return NULL;

	res = ft_calloc(size++,sizeof(char));

	ft_strlcpy(res,(char*) s1, size);
	ft_strlcat(res,(char*) s2, size);
	return (res);
}

// int main(void)
// {
// 	char *r=ft_strjoin("","");
// 	printf("resulr :%s\n",r?r:"null");
// 	return(0);
// }
