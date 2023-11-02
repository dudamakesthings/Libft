#include "libft.h"

void	ft_lstadd_back(t_list **lst_head, t_list *new_node)
{
	t_list *pointer_end;

	if (*lst_head == NULL || new)
	{
		if (*lst_head == NULL)
			*lst_head = new_node;
		else
		{
			pointer_end = ft_lstlast(*lst_head);
			pointer_end->next = new_node; // same thing as pointer_end = new_node; pointer_end->next = NULL; ?
		}
		return ;
	} 
}