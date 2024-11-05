/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:28:43 by hdargui           #+#    #+#             */
/*   Updated: 2024/10/26 10:04:02 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
char * ft_strrchr(const char *s, int c)
{
    int i = ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == (char)c)
        {
            return (char *) s + i;
        }
        i--;
    }
    
    return NULL;
}
 #include <ctype.h>
#include <string.h>
int main() {
    const char *s = "hayat";
    char ch = 'a';
    printf("%s || %s",ft_strrchr(s,ch),strrchr(s,ch));
    return 0;
}