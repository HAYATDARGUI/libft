/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:46:17 by hdargui           #+#    #+#             */
/*   Updated: 2024/11/05 15:46:17 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
// #include <ctype.h>
// #include <stdio.h>
//     int main ()
//     {
//         char c = '1';
//         int i = 0;
//         char a = 'h';
//             printf("%d", ft_isalpha(a));
//             printf("%d\n",isalpha(a));
//             i++;
//     }
