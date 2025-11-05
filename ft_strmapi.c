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
	if (!result)
		return (NULL);
	while (s[i] && result)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
