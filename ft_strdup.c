/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:41:01 by hdargui           #+#    #+#             */
/*   Updated: 2024/10/27 11:48:50 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
char * strdup(const char *s1)
{
    char * s2;
    int i;
    int l = ft_strlen(s2);

    s2 = malloc(sizeof(char)* (l+1)) 
    if(s2 == NULL)
    {
        return NULL;
    }
    while(s1[i])
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
    return s2;
}
