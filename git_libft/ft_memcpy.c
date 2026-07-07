/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbecer <marbecer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 15:28:35 by marbecer          #+#    #+#             */
/*   Updated: 2026/06/30 18:26:23 by marbecer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*v_dest;
	const unsigned char	*v_src;
	size_t				i;

	if (!dest && !src)
		return (0);
	v_dest = (unsigned char *)dest;
	v_src = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		v_dest[i] = v_src[i];
		i++;
	}
	return (dest);
}
