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

void *ft_memmove(void *dest, const void *src, size_t n) {
    unsigned char *d = dest;
    const unsigned char *s = src;
    size_t i;

    if (d == s || n == 0) {
        return dest;
    }

    if (d < s) {
        printf("Forward copy\n");
        i = 0;
        while (i < n) {
            d[i] = s[i];
            i++;
        }
    } else {
        printf("Backward copy\n");
        i = n;
        while (i != 0) {
            i--;
            d[i] = s[i];
        }
    }

    return dest;
}

// int main(void) {
//     char data[] = "ABCDEFGHIJ";

//     printf("Before: %s\n", data);
//     ft_memmove(data + 2, data, 8);   // BIG overlap
//     printf("After memcpy: %s\n", data);

//     return 0;
// }
