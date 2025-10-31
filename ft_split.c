/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 20:24:18 by tmousnia          #+#    #+#             */
/*   Updated: 2025/10/29 20:24:33 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		nb_strs;
	int		i;
	char	**res;
	int		str_length;

	nb_strs = 1;
	i = 0;
	while (s[i])
	{
		if (s[i++] == c)
			nb_strs++;
	}
	res = malloc((nb_strs * sizeof(char *)) + 1);
	i = 0;
	while (i < nb_strs)
	{
		str_length = 0;
		while (s[str_length] != c)
			str_length++;
		res[i] = malloc(str_length * sizeof(char) + 1);
		res[i] = ft_substr(s, 0, str_length);
		s = s + str_length + 1;
		i++;
	}
	return (res);
}
