/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:09:22 by hdargui           #+#    #+#             */
/*   Updated: 2024/10/24 13:42:14 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void  ft_bzero(void *s, size_t n)
{
    (char *) s;
    unsigned int i;
    i=0;
    while(s[i] && n > i )
    {
        
    }
}
int main ()
{
    char s[]="hayat";
    printf("%s",bzero(s,3));
}
