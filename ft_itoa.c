/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:37:09 by hdargui           #+#    #+#             */
/*   Updated: 2024/11/05 15:37:09 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int num_length(int n) {
    int len = 0;
    if (n <= 0)
        len++;
    while (n != 0) {
        n /= 10;
        len++;
    }
    return len;
}

char *ft_itoa(int n) {
    int len = num_length(n);
    char *str ;
    unsigned int num;

    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return NULL;

    str[len] = '\0';

    if (n < 0) {
        str[0] = '-';
        num = -n;
    } else {
        num = n;
    }

    while (len-- && str[len] != '-') {
        str[len] = (num % 10) + '0';
        num /= 10;
    }

    return str;
}
// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h"
// int main() {
    
//     int n = -1234546;
//     // char *str1 = itoa(n);
//     char *str2 = ft_itoa(n);
//     // printf("itoa: %s\n", str1);
//     printf("ft_itoa: %s\n", str2);
//     return 0;
// }
