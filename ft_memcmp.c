/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:10:28 by hdargui           #+#    #+#             */
/*   Updated: 2024/10/27 09:55:31 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned int	i;
    unsigned char *a = (unsigned char *)s1;
    unsigned char *b = (unsigned char *)s2;
	i = 0;
	if (!a && !b)
		return (0);
	while ((a[i] != '\0' || b[i] != '\0') && n > i)
	{
		if (a[i] != b[i])
		{
			return (a[i]- b[i]);
		}
		i++;
	}
	return (0);
}
