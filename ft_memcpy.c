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

#include <stdio.h>
#include <ctype.h>
#include <string.h>
size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
 void * ft_memcpy(void * dst, const void * src, size_t n)
 {
     size_t i;
    unsigned char *dest = (unsigned char *)dst;
    unsigned char *sc = (unsigned char *)src;
   unsigned lensrc=ft_strlen(src);
   i=0;
  if(n > 0)
  {
        while (sc[i]!='\0' && i <= n-1)
        {
            dest[i] = sc[i];
            i++;
        }
  } 
  dest[i]='\0';
  return dest;
}
int main()
{
    char src[]="hayat";
    char dest[0];
    printf("%s\n",memcpy(dest,src,0));
    printf("%s\n",ft_memcpy(dest,src,0));
}