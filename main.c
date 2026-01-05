#include "libft.h"
#include <stdio.h>

int main(void)
{
	t_list *lst= ft_lstnew("this the node");
	printf("content of node : %s\n", lst->content);
	printf("next : %s\n", lst->next);
}