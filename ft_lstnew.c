/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <tmousnia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 20:29:40 by tmousnia          #+#    #+#             */
/*   Updated: 2026/01/05 20:29:43 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list *lstnew;

	lstnew = malloc(sizeof(t_list));
	if(lstnew)
	{
		lstnew->content = content;
		lstnew->next = NULL;
	}
	return (lstnew);
}