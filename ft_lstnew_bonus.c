/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:37:45 by hdargui           #+#    #+#             */
/*   Updated: 2024/11/05 15:37:45 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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