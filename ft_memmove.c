/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/11/05 15:38:31 by hdargui           #+#    #+#             */
/*   Updated: 2024/11/05 15:38:31 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (src < dest)
	{
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
// #include <stdio.h>


// int main() {
//     char buffer[10] = "abcdefg";
//     printf("Before memmove: %s\n", buffer);
    
//     ft_memmove(buffer + 4, buffer, 4);  
    
//     printf("After memmove: %s\n", buffer); 
    
//     return 0;
// }