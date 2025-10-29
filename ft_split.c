/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 20:24:18 by tmousnia          #+#    #+#             */
/*   Updated: 2025/10/29 20:24:33 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	int		nb_strs;
	int		i;
	char	**res;
	int		str_length;

	nb_strs = 1;// start from 1, becaus for one separators there is two strings
	i = 0;
	while (s[i])// calculate nb of strings
	{
		if (s[i] == c)
			nb_strs++;
		i++;
	}
	res = malloc((nb_strs * sizeof(char *)) + 1);//allocate the array of strings
	i = 0;
	while (i < nb_strs)//iterate over the source with the limit of total strings based on the separator
	{
		str_length = 0;
		while (s[str_length] != c)//calculate every string inside the s and allocate the memory based on the string length
			str_length++;
		res[i] = malloc(str_length * sizeof(char) + 1);//allocation
		res[i] = ft_substr(s,0,str_length);//substring the string starting from 0 to the length of the string
		s = s + str_length +1; // increment the source by the length of the substred string
		i++;//go to the next string
	}
	return (res);
}

// int main(void)
// {
// 	char *input = "hello,world,!";
// 	char sep = ',';
// 	int j, count = 1;

// 	/* count expected tokens (separators + 1) */
// 	for (j = 0; input[j]; j++)
// 		if (input[j] == sep)
// 			count++;

// 	char **res = ft_split(input, sep);
// 	if (!res)
// 	{
// 		fprintf(stderr, "ft_split returned NULL\n");
// 	}
// 	else
// 	{
// 		for (j = 0; j < count; j++)
// 		{
// 			printf("res[%d] = %s\n", j, res[j] ? res[j] : "(null)");
// 			free(res[j]); /* free individual strings; main will free the array */
// 		}
// 	}

// 	free(res);

// 	return (0);
// }
