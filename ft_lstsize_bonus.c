#include "libft.h"
int	ft_lstsize(t_list *lst)
{
	int	r;

	if (!lst)
		return (0);
	r = 0;
	while (lst)
	{
		lst = lst->next;
		r++;
	}
	return (r);
}