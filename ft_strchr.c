/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:03:42 by hdargui           #+#    #+#             */
/*   Updated: 2024/10/26 10:03:43 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char * ft_strchr(const char *s, int c)
{
    int i ;

    i =0;
    while (s[i]!='\0')
    {
        if (s[i]== (char) c)
            return (char *)(s + i);
        i++;
    }
    if(c =='\0')
    {
        return  (char *)(s + i);
    }
    return NULL;
}
// #include <ctype.h>
// #include <string.h>
// int main() {
//     const char *s = "hayat";
//     char c = ' ';
//     printf("%s || %s",ft_strchr(s,c),strchr(s,c));
//     return 0;
// }