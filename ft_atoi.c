/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:26:48 by hdargui           #+#    #+#             */
/*   Updated: 2024/11/05 15:26:48 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_atoi(const char *str)
{
    unsigned long long res = 0;
    int sign = 1;

    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;

    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }

    while (*str && *str >= '0' && *str <= '9')
    {
        res = res * 10 + (*str - '0');
        
        if (res > 9223372036854775807 && sign == 1)
            return (-1); // Overflow
        if (res > 9223372036854775807 && sign == -1)
            return (0); // Underflow

        str++;
    }
    return (res * sign);
}
#include <stdio.h>
#include <stdlib.h> 

int main() {
    char test_cases[] = "2147483648";

    printf("ft_atoi:%d, atoi:%d\n", ft_atoi(test_cases), atoi(test_cases));

    return 0;
}