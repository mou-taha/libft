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

int	count_digit(long n)
{
	int	len;

	len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*build_str_rev(char *res, long n, int sign)
{
	*res-- = '\0';
	while (n)
	{
		*res-- = '0' + (n % 10);
		n /= 10;
	}
	if (sign == -1)
		*res = '-';
	else
		res++;
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		sign;
	int		len;
	long	number;

	number = n;
	sign = 1;
	len = 0;
	if (number == 0)
	{
		res = ft_strdup("0");
		return (res);
	}
	if (number < 0)
	{
		sign = -1;
		number = -number;
		len++;
	}
	len += count_digit(number);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	build_str_rev(res + len, number, sign);
	return (res);
}
