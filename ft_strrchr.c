/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:55:13 by tmousnia          #+#    #+#             */
/*   Updated: 2025/10/20 16:55:44 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last);
}

// int main(void)
// {
//     const char *text = "Hello, World!";
//     int ch;

//     printf("String: \"%s\"\n\n", text);

//     // Normal test
//     ch = ',';
//     printf("Testing with '%c'\n", ch);
//     printf("ft_strchar: %s\n", ft_strrchr(text, ch));
//     printf("strchr:     %s\n\n", strrchr(text, ch));
//     return 0;
// }
