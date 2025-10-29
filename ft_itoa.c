/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 20:24:18 by tmousnia          #+#    #+#             */
/*   Updated: 2025/10/29 20:24:33 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	char	*result;
	int		sign;
	int		len;
	int		tmp;

	sign = 1;
	len = 0;
	tmp = 0;
	// Handle 0 case
	if (n == 0)
	{
		res = malloc(2);
		res[0] = '0';
		res[1] = '\0';
		return res;
	}

	// Handle negative numbers
	if (n < 0)
	{
		sign = -1;
		n = -n;
		len++;
	}

	// Count digits
	tmp = n;
	while (tmp)
	{
		tmp /= 10;
		len++;
	}

	// Allocate memory (+1 for '\0')
	res = malloc(len + 1);
	if (!res)
		return NULL;

	result = res + len;  // point to end
	*result-- = '\0';

	// Build the string in reverse
	while (n)
	{
		*result-- = '0' + (n % 10);
		n /= 10;
	}

	if (sign == -1)
		*result = '-';
	else
		result++;

	return result;
}



// int main()
// {
// 	char *res = ft_itoa(-518541185);
// 	printf("res final%s\n",res);
//     free(res);
// }
