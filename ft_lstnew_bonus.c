#include "libft.h"
t_list *ft_lstnew(void *content)
{
    t_list * Node;
    Node=malloc(sizeof(t_list));
    if (!Node)
		return (NULL);
    Node->content=content;
    Node->next=NULL;
    return  Node ;
}