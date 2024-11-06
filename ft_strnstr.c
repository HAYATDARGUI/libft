/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:18:26 by hdargui           #+#    #+#             */
/*   Updated: 2024/10/26 12:02:51 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    size_t len_hay = ft_strlen(haystack);
    size_t len_needle= ft_strlen(needle);
    i=0;
    if(haystack == NULL || needle == NULL)
        return NULL;
     if(*needle =='\0')
        return (char *)haystack;
    while(  i < len &&  i < len_hay)
    {
       j=0;
       while(needle[j] && haystack[i+j]== needle[j] && (i + j) < len)
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
//     char ch[]="hayat";
//    char n[]="";
//     size_t l=12;
//     printf("%s",strnstr(NULL,n,l));
// }