/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 20:24:18 by tmousnia          #+#    #+#             */
/*   Updated: 2025/10/29 20:24:33 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned char	*d;
	size_t			i;

	d = (unsigned char *)dest;
	i = 0;
	while (i < count)
		d[i++] = (unsigned char)c;
	return (dest);
}

// int main(void)
// {
//    char buffer[21];
//    void *string;

//    ft_memset(buffer, 0, sizeof(buffer));
//    string = (char *) ft_memset(buffer,'P', 10);
//    printf("\nBuffer contents: %s\n", (char*)string);
//    ft_memset(buffer+10, 'B', 10);
//    printf("\nBuffer contents: %s\n", buffer);
// }
