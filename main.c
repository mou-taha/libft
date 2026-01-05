#include "libft.h"
#include <stdio.h>

int main(void)
{
	t_list *lst= ft_lstnew("node 1");
	t_list *lst2= ft_lstnew("node 2");
	ft_lstadd_front(&lst, lst2);
	printf("content node 1 : %s\n", lst->content);
	printf("content node 2 : %s\n", lst->next->content);

	



	// int nm = 10;

	// int *pnm= &nm;

	// int **ppnm = &pnm;
	// printf("value : %d\n", nm);
	// printf("address of nm : %p\n", &nm);
	// printf("pointer to nm : %d\n", *pnm);
	// printf("pointer to pointer : %d\n", **ppnm);
}