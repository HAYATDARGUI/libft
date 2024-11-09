/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:04:42 by hdargui           #+#    #+#             */
/*   Updated: 2024/10/26 12:43:21 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void * ft_memcpy(void * dst, const void * src, size_t n)
 {
    size_t i;
    unsigned char *dest = (unsigned char *)dst;
    unsigned char *sc = (unsigned char *)src;

    i=0;
    if(dest==src)
    {
      return dest;
    }
    if(n > 0)
    {
          while (sc[i]!='\0' && i <= n - 1)
          {
              dest[i] = sc[i];
              i++;
          }
    } 
  dest[i]='\0';
  return dest;
}

