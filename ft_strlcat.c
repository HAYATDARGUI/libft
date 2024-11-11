/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/10/25 12:49:18 by hdargui           #+#    #+#             */
/*   Updated: 2024/10/26 10:03:46 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lensrc;
	size_t	lendst;

	i = 0;
	lensrc = ft_strlen(src);
	if (dst == NULL && dstsize == 0)
		return (lensrc);
	lendst = ft_strlen(dst);
	if (dstsize == 0 || dstsize <= lendst)
	{
		return (dstsize + lensrc);
	}
	while (src[i] && lendst + i < dstsize - 1)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}
