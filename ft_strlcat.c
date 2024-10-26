/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:49:18 by hdargui           #+#    #+#             */
/*   Updated: 2024/10/25 15:18:48 by hdargui          ###   ########.fr       */
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
size_t ft_strlcat(char *  dst, const char *  src, size_t dstsize)
{
    unsigned int i=0;
    unsigned lensrc=ft_strlen(src);
    unsigned lendst=ft_strlen(dst);
    
    if(dstsize <=lendst)
    {
        return (dstsize + lensrc)
    }
    while(src[i] && lendst + 1 < dstsize -1)
    {
        dst[lendst+i]=src[i];
        i++;
    }
    dst[lendst+i]='\0';
    return(lendst);
    
}
int main()
{
    char src[]="hayat";
    char dest[0];
    printf("%lu\n",ft_strlcpy(dest,src,0));
    printf("%s",dest);
}