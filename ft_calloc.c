/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 20:24:18 by tmousnia          #+#    #+#             */
/*   Updated: 2025/10/29 20:24:33 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*res;
	unsigned int	ttl_bytes;
	unsigned char	*r;

	if (nmemb && size > SIZE_MAX / nmemb)
		return (NULL);
	ttl_bytes = nmemb * size;
	res = malloc(ttl_bytes);
	if (res != NULL)
		ft_memset(res, 0, ttl_bytes);
	return (res);
}

// int main() {
//     int *arr = ft_calloc(5, sizeof(int));
//     char *str = ft_calloc(5, sizeof(char));
//     for (int i = 0; i < 5; i++)
// 		if(!arr[i])
//         	printf("%d ", arr[i]); // prints: 0 0 0 0 0
//     printf("\n");
//     for (int i = 0; i < 5; i++)
// 		if(!str[i])
//         	printf("%d ", str[i]); // prints: 0 0 0 0 0 (null chars)
//     printf("\n");
//     free(arr);
//     free(str);
//     return 0;
// }
