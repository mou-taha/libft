/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 20:24:18 by tmousnia          #+#    #+#             */
/*   Updated: 2025/10/29 20:24:33 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, unsigned int n)
{
    unsigned char *src = (unsigned char *)s;
    size_t i = 0;
    while (src && i < n)
    {
        if (*src == c)
            return src;
        src++;
        i++;
    }
    return NULL;
}

// int main(void)
// {
//     unsigned char src[6] = "hello";

//     char *res=ft_memchr(src, 'o', 3);
//     printf("res : %s\n",res? "found":"not found");
//     return(0);
// }
