/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:43:15 by hdargui           #+#    #+#             */
/*   Updated: 2024/11/05 15:43:15 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	b = (unsigned char *)s2;
	a = (unsigned char *)s1;
	i = 0;
	if (!a && !b)
		return (0);
	while ((a[i] != '\0' || b[i] != '\0') && n > i)
	{
		if (a[i] != b[i])
		{
			if (a[i] > b[i])
				return (1);
			else if (a[i] < b[i])
				return (-1);
		}
		i++;
	}
	return (0);
}
