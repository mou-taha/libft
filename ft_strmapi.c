/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:27:24 by tmousnia          #+#    #+#             */
/*   Updated: 2025/10/22 21:27:30 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;
	int		s_len;

	if (!s || !f)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	result = malloc(s_len + 1);
	while (s[i] && result)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}
// #include <ctype.h>
// char upper_even(unsigned int i, char c)
// {
//     if (i % 2 == 0)
//         return toupper(c);
//     return c;
// }
// int main(void)
// {
//     char *s = "hello world";
//     char *res = ft_strmapi(s, upper_even);

//     printf("%s\n", res);  // Output: "HeLlO WoRlD"
//     free(res);
// }
