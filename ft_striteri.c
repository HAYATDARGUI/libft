/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:32:36 by hdargui           #+#    #+#             */
/*   Updated: 2024/11/08 17:32:23 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void to_uppercase(unsigned int index, char *c) {
//     if (*c >= 'a' && *c <= 'z') {
//         *c -= 32;
//     }
// }
// int main() {
//     char str[] = "hello world";
//     printf("Original string: %s\n", str);

//     ft_striteri(str,to_uppercase );

//     printf("Modified string: %s\n", str);
//     return (0);
// }