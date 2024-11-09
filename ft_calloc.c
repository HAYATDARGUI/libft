/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:33:24 by hdargui           #+#    #+#             */
/*   Updated: 2024/10/27 10:29:39 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_calloc(size_t count, size_t size)
{
    unsigned char  *alloctearray;
    if(count==0 || size==0)
    {
        return (malloc(0));
    }
    if(count > SIZE_MAX / size)
    {
        return (NULL);
    }
    alloctearray = malloc(count * size);
    if (alloctearray == NULL)
	{
		return NULL;
	}
    ft_bzero(alloctearray,count*size);
    return alloctearray;
}
// int main ()
// {
//     char s[]="hayat";
//     printf("%s",ft_calloc(2,7));
// }