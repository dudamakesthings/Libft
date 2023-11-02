#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;
	new_node =(t_list *)malloc(1 * sizeof(t_list));
	if(new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

int main()
{
	char *str = "my starter pokemon is squirtle";

	struct s_list new; // t_list new;

	new = ft_lstnew(str);
	printf("%s\n", new->content);
}