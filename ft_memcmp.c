/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 21:43:02 by tmousnia          #+#    #+#             */
/*   Updated: 2025/10/31 21:50:28 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_memcmp(const void	*s1, const void	*s2, size_t	n)
{
	unsigned char	*src1;
	unsigned char	*src2;
	int				i;

	i = 0;
	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	while (n--)
	{
		if (src1[i] != src2[i])
			return (src1[i] - src2[i]);
		i++;
	}
	return (0);
}
