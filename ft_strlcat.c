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

unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	int				i;
	unsigned int	lend;

	i = 0;
	lend = ft_strlen(dst);
	if (size > 0)
	{
		while (src[i] && lend < size -1)
		{
			dst[lend] += src[i];
			lend++;
			i++;
		}
		dst[lend] = '\0';
	}
	return (lend);
}

// int main()
// {
//     char *src = " worldsdasded";
//     char dest[20]="hello";

//     ft_strlcat(dest, src, 20);

//     printf("result : %s\n", dest);
//     return (0);
// }
