include "libft.h"

t_list	*ft_lstlast(t_list *lst_header)
{
	t_list	*pointer_nodes;
	int		position;

	if (pointer_nodes == NULL)
		return (NULL);
	pointer_nodes = *lst_header;
	position = ft_lstsize(pointer_nodes);
	return (pointer_nodes + position);
}