#include "libft.h"
#include <stdio.h>

void print(void *str)
{
	if(!str)
		return;
	printf("%s\n",str);
	return;
}
int main(void)
{
	char str[] ="walo";
	t_list *head= ft_lstnew("node 1");
	t_list *lst2= ft_lstnew("node 2");
	t_list *lst3= ft_lstnew("node 3");
	t_list *lst4= ft_lstnew("node 4");
	ft_lstadd_front(&head, lst2);
	ft_lstadd_front(&head, lst3);
	ft_lstadd_front(&head, lst4);

	
	t_list *current;
	printf("size of list : %d\n",ft_lstsize(head));
	ft_lstdelone(lst2, print);
	ft_lstiter(head, print);
	current = head;
	
	//printf("last node : %s\n", ft_lstlast(head)->content);
	t_list *lst5= ft_lstnew("node 5");
	ft_lstadd_back(&head, lst5);
	printf("last node : %s\n", ft_lstlast(head)->content);
	printf("size of list : %d\n",ft_lstsize(head));


	// int nm = 10;

	// int *pnm= &nm;

	// int **ppnm = &pnm;
	// printf("value : %d\n", nm);
	// printf("address of nm : %p\n", &nm);
	// printf("pointer to nm : %d\n", *pnm);
	// printf("pointer to pointer : %d\n", **ppnm);
	return (0);
}

