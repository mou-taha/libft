/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 20:24:18 by tmousnia          #+#    #+#             */
/*   Updated: 2025/10/29 20:24:33 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dest;
	s = src;
	if (d == s || n == 0)
		return (dest);
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i++] = s[i];
		}
	}
	else
	{
		i = n;
		while (i != 0)
		{
			d[i] = s[--i];
		}
	}
	return (dest);
}

// int main(void) {
//     char data[20] = "ABCDEFGHIJ";
//     char s[20] = "123";

//     printf("Before: %s\n", data);
//     ft_memmove(data, s, sizeof(data));   //  overlap
//     printf("After memcpy: %s\n", data);

//     return 0;
// }
