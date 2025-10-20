#include "libft.h"

int ft_strlen(const char *s)
{
    int     i;
    i = 0;
    while(s[i]!='\0')
        i++;
    return (i);
}

int ft_strtrim(char const *s1, char const *set)
{
	int		size;
	int		size_set;
	int		i;
	int		j;


	i = 0;
	size = ft_strlen(s1);
	size_set = ft_strlen(set);

	while (s1[i])
	{
		j = 0;
		while(set[j])
		{
			if(set[i] == set[j])
				break;
			j++;
		}
		if(j == size_set)
			break;
		i++;
	}

	return i;
}

int main(void)
{
	char const *r="-ahello-";
	printf("res :%d\n",ft_strtrim(r,"-*a"));
}
