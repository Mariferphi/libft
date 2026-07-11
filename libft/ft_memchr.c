/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbecer <marbecer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 15:30:40 by marbecer          #+#    #+#             */
/*   Updated: 2026/07/07 17:46:57 by marbecer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	c_c;

	str = (unsigned char *)s;
	c_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == c_c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
