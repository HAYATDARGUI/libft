/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:18:26 by hdargui           #+#    #+#             */
/*   Updated: 2024/10/24 13:06:52 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
char * ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    size_t len_hay = ft_strlen(haystack);
    size_t len_needle= ft_strlen(needle);
    i=0;
    if(*needle =='\0')
    {
        return (char *)haystack;
    }
    while( i < len_hay)
    {
       j=0;
       while(needle[j] && haystack[i+j]== needle[j])
       {
            if(j +1 == len_needle)
                return (char *) haystack + i;
            j++;
       }
       i++;
    }
    return NULL;
}
// int main()
// {
//     char ch[]="hello hayat";
//    char n[]="say";
//     size_t l=12;
//     printf("%s || %s",strnstr(ch,n,l),ft_strnstr(ch,n,l));
// }