/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerraf <mguerraf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 08:03:55 by mguerraf          #+#    #+#             */
/*   Updated: 2024/10/22 09:40:48 by mguerraf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
