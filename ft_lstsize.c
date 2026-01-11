/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <tmousnia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 10:34:51 by tmousnia          #+#    #+#             */
/*   Updated: 2026/01/11 18:05:41 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		count;
	
	current = lst;
	count = 0;	
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
