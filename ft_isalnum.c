/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerraf <mguerraf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:43:53 by mguerraf          #+#    #+#             */
/*   Updated: 2024/10/22 10:43:54 by mguerraf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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