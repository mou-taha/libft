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
#include "libft.h"

int	count_digit(int n)
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

char	*build_str_rev(char *res, int n, int sign)
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

	sign = 1;
	len = 0;
	if (n == 0)
	{
		res = malloc(2);
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	if (n < 0)
	{
		sign = -1;
		n = -n;
		len++;
	}
	len += count_digit(n);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	build_str_rev(res + len, n, sign);
	return (res);
}

// int main()
// {
// 	char *res = ft_itoa(-84522556);
// 	printf("res final%s\n",res);
//     free(res);
// }
