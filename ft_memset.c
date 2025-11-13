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

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*d;
	size_t			i;

	d = (unsigned char *)dest;
	i = 0;
	while (i < n)
		d[i++] = (unsigned char)c;
	return (dest);
}
#include <stdio.h>
int main(void)
{
	int nb;
	int i=0;
	int src = -69584;

	while (i <sizeof(int))
	{
		ft_memset((char *)&nb+i, ((char *)&src)[i],1);
		i++;
	}
	

	printf("res : %d\n" , nb);

	
}
