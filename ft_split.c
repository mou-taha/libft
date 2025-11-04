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

int	count_strings(char const *s, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*s)
	{
		if (*s != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (*s == c)
			x = 0;
		s++;
	}
	return (count);
}

static void	*free_all(char **str, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		nb_strs;
	int		i;
	char	**res;
	int		str_length;

	if (!s)
		return (NULL);
	i = 0;
	nb_strs = count_strings(s, c);
	res = malloc((nb_strs + 1) * sizeof(char *));
	while (i < nb_strs)
	{
		str_length = 0;
		while (*s == c)
			s++;
		while (s[str_length] != c && s[str_length])
			str_length++;
		res[i] = ft_substr(s, 0, str_length);
		if (!res[i])
			return (free_all(res, i));
		s += str_length;
		i++;
	}
	res[i] = 0;
	return (res);
}
