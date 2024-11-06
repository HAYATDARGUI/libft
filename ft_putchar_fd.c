/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdargui <hdargui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:38:46 by hdargui           #+#    #+#             */
/*   Updated: 2024/11/05 15:38:46 by hdargui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd) {
    write(fd, &c, 1);
}


// int main() {
//     ft_putchar_fd('A', 1);
//     ft_putchar_fd('\n', 1); 

   
//     ft_putchar_fd('B', 2);  


//     int fd = open("output.txt", O_WRONLY | O_CREAT , 0644);
//     ft_putchar_fd('C', fd);
//     close(fd);  
//     return 0;
// }