/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:55:13 by tmousnia          #+#    #+#             */
/*   Updated: 2025/10/20 16:55:44 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	int		i;
	int		size;

	if (s == NULL)
		return (NULL);
	size = 0;
	i = 0;
	while (s[size])
		size++;
	res = malloc((size + 1) * sizeof(char));
	if (res != NULL)
	{
		while (i < size)
		{
			res[i] = s[i];
			i++;
		}
		res[size] = '\0';
	}
	return (res);
}
