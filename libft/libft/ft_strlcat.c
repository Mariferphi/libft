/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbecer <marbecer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 15:29:11 by marbecer          #+#    #+#             */
/*   Updated: 2026/07/02 19:59:30 by marbecer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < size)
		i++;
	if (i == size)
		return (size + ft_strlen(src));
	j = 0;
	while (src[j] && i + j < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

// #include <stdio.h>

// int main(void)
// {
// 	char dst[20] = "Hola";
// 	char src[] = " Mundo";

// 	size_t ret;

// 	printf("Antes: dst = \"%s\"\n", dst);

// 	ret = ft_strlcat(dst, src, sizeof(dst));

// 	printf("Después: dst = \"%s\"\n", dst);
// 	printf("Return: %zu\n", ret);

// 	return 0;
// }