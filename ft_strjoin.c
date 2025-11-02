/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:55:13 by tmousnia          #+#    #+#             */
/*   Updated: 2025/10/20 16:55:44 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*res;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = ft_calloc(size, sizeof(char));
	ft_strlcpy(res, (char *) s1, size);
	ft_strlcat(res, (char *) s2, size);
	return (res);
}

// int main(void)
// {
// 	char *r=ft_strjoin("aaa","b");
// 	int i=0;
// 	while (r[i])
// 	{
// 		printf("result :%c\n",r[i]);
// 		i++;
// 	}
// 	printf("result :%s\n",r);

// 	return(0);
// }
