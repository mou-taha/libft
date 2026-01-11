/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <tmousnia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 21:36:00 by tmousnia          #+#    #+#             */
/*   Updated: 2026/01/11 21:48:51 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tmp;
	t_list	*newnode;

	tmp = lst;
	while (tmp)
	{
		if(f)
			newnode = ft_lstnew(f(tmp->content));
		else
			newlst = ft_lstnew(tmp->content);
		if(!newnode)
		{
			ft_lstclear(&newlst,del);
			return (NULL);
		}
		ft_lstadd_back(newlst,newnode);
		tmp = tmp->next;
	}
	return lst;
}