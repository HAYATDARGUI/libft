/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:03:17 by hdargui           #+#    #+#             */
/*   Updated: 2024/10/26 10:23:16 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 void * ft_memchr(const void *s, int c, size_t n)
{
    size_t i ;
    unsigned char *ptr = (unsigned char *)s;
    i =0;
    while (ptr[i]!='\0' && i < n)
    {
        if (ptr[i]== (char) c)
            return (char *)(ptr + i);
        i++;
    }
    return NULL;
}
