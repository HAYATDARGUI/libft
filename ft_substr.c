/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:45:05 by hdargui           #+#    #+#             */
/*   Updated: 2024/11/05 15:45:05 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
char *ft_substr(char const *s, unsigned int start,size_t len)
{
    size_t i ;
    unsigned int slen =strlen(s);
    char * result;

    i=0;
    result =malloc(sizeof(char)*(len +1));
    if (result==NULL)
    {
        return NULL;
    }
    if (start >= slen) 
    {
        result = malloc(1);///Allocate memory for an empty string
        if (result == NULL) 
        {
            return NULL; 
        }
        result[0] = '\0'; 
        return result;
    }
    while (s[i] && s[i+start] && i < len)
    {
        result[i] =s[i+start];
        i++;
    }
    result[i] ='\0';
    return result;
}