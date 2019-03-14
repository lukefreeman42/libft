#include "libft.h"

t_list	*ft_lstadd(t_list *lst, t_list *new)
{
	if (lst && new)
	{
		lst->next = new;
		return (new);
	}
	return (NULL);
}	
