/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <tmousnia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:57:39 by tmousnia          #+#    #+#             */
/*   Updated: 2026/01/11 17:07:21 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list	**lst,t_list	*new)
{
	t_list *last;
	
	last = ft_lstlast(*lst);

	if(!lst || !new || !last)
		return;
	new -> next = NULL;
	last -> next = new;
	return; 
}
