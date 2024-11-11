/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:57:00 by hdargui           #+#    #+#             */
/*   Updated: 2024/11/10 16:57:00 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		t;
	int		end;	
	char	*result;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	end = ft_strlen(s1) - 1;
	while (end > i && ft_strchr(set, s1[end]))
		end--;
	t = end - i + 1;
	result = malloc(sizeof(char) * (t + 1));
	if (result == NULL)
		return (NULL);
	j = 0;
	while (j < t)
	{
		result[j++] = s1[i + j];
	}
	result[t] = '\0';
	return (result);
}
