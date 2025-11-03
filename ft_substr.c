/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:55:13 by tmousnia          #+#    #+#             */
/*   Updated: 2025/10/20 16:55:44 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*res;

	if (!s)
		return (NULL);

	s_len = ft_strlen(s);
	// If start is beyond end of string, return empty string
	if (start >= s_len)
	{
		res = (char *)malloc(1);
		if (res)
			res[0] = '\0';
		return (res);
	}

	// Adjust len so we don't read past end of string
	if (len > s_len - start)
		len = s_len - start;

	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);

	ft_memcpy(res, s + start, len);
	res[len] = '\0';
	return (res);
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
