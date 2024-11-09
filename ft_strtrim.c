/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:44:57 by hdargui           #+#    #+#             */
/*   Updated: 2024/11/05 15:44:57 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
    int i =0;
    char * result;
    int slen= ft_strlen(s1);
    int end = slen-1;
    int t =end- i+1;
    result=malloc(sizeof(char)*(t+1));
    if(result==NULL)
    {
        return NULL; 
    }
    while(s1[i]&& ft_strchr(set,s1[i])) //Remove the character in set by skipping it and moving to the next position with i++.(start of the string)
    {
        i++;
    }
    while (end > i &&ft_strchr(set,s1[end]))
    {
        end--;
    }
    int j=0;
    while (j<t)
    {
        result[j]=s1[i+j];
        j++;
    }
    result[t]='\0';
    return result;
}
// int main() {
//     char str1[] = "   Hello!   ";
//     char set[] = " "; 

//     char *trimmed_str = ft_strtrim(str1, set);

//     printf("%s\n", trimmed_str);

// }