/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:55:13 by tmousnia          #+#    #+#             */
/*   Updated: 2025/10/20 16:55:44 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lend;
	size_t	lens;
	size_t	to_copy;
	size_t	i;

	lens = ft_strlen(src);
	lend = 0;
	if (size > 0)
		while (lend < size && dst[lend] != '\0')
			lend++;
	if (lend == size)
		return (lend + lens);
	to_copy = size - lend - 1;
	if (to_copy > lens)
		to_copy = lens;
	i = 0;
	while (i < to_copy)
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = '\0';
	return (lend + lens);
}

// int main()
// {
//     char *src = " worldsdasded";
//     char dest[20]="hello";

//     ft_strlcat(dest, src, 20);

//     printf("result : %s\n", dest);
//     return (0);
// }
