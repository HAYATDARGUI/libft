/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:36:07 by hdargui           #+#    #+#             */
/*   Updated: 2024/11/05 15:36:07 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_isalnum(int c)
{
	while ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A'
			&& c <= 'Z'))
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     printf("%d", isalnum(''));
//     printf("%d", ft_isalnum(''));
// }