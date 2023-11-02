#include "libft.h"

void	ft_lstdelone(t_list *lst_node, void (*del)(void *))
{
	if (lst_node == NULL || del == NULL)
		return ;
	del(lst_node->content);
	free(lst_node);
}
