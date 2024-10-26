/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:35:24 by hdargui           #+#    #+#             */
/*   Updated: 2024/10/26 10:03:49 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
size_t ft_strlcpy(char *  dst, const char *  src, size_t dstsize)
{
   size_t i;
   unsigned lensrc=ft_strlen(src);
   i=0;
  if(dstsize > 0)
  {
        while (src[i]!='\0' && i <= dstsize-1)
        {
            dst[i]=src[i];
            i++;
        }
  } 
  dst[i]='\0';
  return lensrc;
}
int main()
{
    char src[]="hayat";
    char dest[0];
    printf("%lu\n",ft_strlcpy(dest,src,0));
    printf("%s",dest);
}