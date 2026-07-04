/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbecer <marbecer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 15:27:53 by marbecer          #+#    #+#             */
/*   Updated: 2026/07/02 14:52:42 by marbecer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>
// Prototipo de tu función
// #include <stdio.h>
// #include <string.h>
// int main() 
//     char buffer[10];
//     ft_memset(buffer, 1, 5);
//     printf("Prueba 1 (5 bytes con valor 1): %d %d %d %d %d\n", 
//            buffer[0], buffer[1], buffer[2], buffer[3], buffer[4]);
//     ft_memset(buffer + 5, 2, 3);
//     printf("Prueba 2 (3 bytes con valor 2): %d %d %d\n", 
//            buffer[5], buffer[6], buffer[7]);
//     ft_memset(buffer, 0, sizeof(buffer));
//     printf("Prueba 3 (Todo a 0): %d %d %d\n", 
//               buffer[0], buffer[5], buffer[9]);return 0;
// }   