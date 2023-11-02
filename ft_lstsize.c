#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (lst == NULL)
		return (NULL);
	while(lst->next != NULL)
		i++;
	return (i);
}