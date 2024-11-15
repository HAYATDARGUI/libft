/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:05:10 by hdargui           #+#    #+#             */
/*   Updated: 2024/11/10 17:05:10 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_hay;
	size_t	len_needle;

	i = 0;
	if (haystack == NULL && len == 0)
		return (NULL);
	len_hay = ft_strlen(haystack);
	len_needle = ft_strlen(needle);
	if (!needle[0])
		return ((char *)haystack);
	while (i < len && i < len_hay)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (j + 1 == len_needle)
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
