/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/11/05 15:41:45 by hdargui           #+#    #+#             */
/*   Updated: 2024/11/05 15:41:45 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	size_t j;
	char *s3;

	i = 0;
	j = 0;
	s3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (s3 == NULL)
		return (NULL);
	while (s1[i] && i < ft_strlen(s1))
    {
        s3[i] = s1[i];
	    i++;
    }
		
	while (s2[j] && j < ft_strlen(s2))
    {
        s3[i] = s2[j];
	    i++;
	    j++;
    }
		
	s3[i] = '\0';
	return (s3);
}

// #include <stdio.h>
//  int main(void)
// {
//     char *result = ft_strjoin("hello", "World!");

//     if (result)
//     {
//         printf("%s\n", result); // Print the result
//     }

// }