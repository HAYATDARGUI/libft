/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:53:26 by hdargui           #+#    #+#             */
/*   Updated: 2024/11/10 16:53:26 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sc;

	sc = (unsigned char *)src;
	dest = (unsigned char *)dst;
	i = 0;
	if (dest == src)
	{
		return (dest);
	}
	if (n > 0)
	{
		while (i <= n - 1)
		{
			dest[i] = sc[i];
			i++;
		}
	}
	return (dest);
}
