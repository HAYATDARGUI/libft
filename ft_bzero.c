/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:09:22 by hdargui           #+#    #+#             */
/*   Updated: 2024/10/26 10:03:04 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void ft_bzero(void *s, size_t n) {
    unsigned char *ptr = (unsigned char *)s;
    while (n > 0) {
        *ptr = 0;
        ptr++;
        n--;
    }
}

