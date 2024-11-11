/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:37:12 by hdargui           #+#    #+#             */
/*   Updated: 2024/11/11 11:37:12 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i])
			count++;
		while (str[i] != c && str[i])
		{
			i++;
		}
	}
	return (count);
}

static int	find_next_word(const char *str, char c, int *start)
{
	size_t	i;

	i = *start;
	while (str[i] && str[i] == c)
		i++;
	*start = i;
	while (str[i] && str[i] != c)
		i++;
	return (i - *start);
}

char	**free_split(char **alloc)
{
	int	i;

	i = 0;
	if (alloc)
	{
		while (alloc[i])
		{
			free(alloc[i]);
			i++;
		}
		free(alloc);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		len;
	int		start;
	char	**alloc;

	j = 0;
	start = 0;
	if (!s)
		return (NULL);
	alloc = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!alloc)
		return (NULL);
	while (s[start])
	{
		len = find_next_word(s, c, &start);
		if (len > 0)
		{
			alloc[j] = ft_substr(s, start, len);
			if (!alloc[j++])
				return (free_split(alloc));
			start += len;
		}
	}
	alloc[j] = NULL;
	return (alloc);
}
