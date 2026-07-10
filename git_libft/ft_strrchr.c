/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbecer <marbecer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 15:30:07 by marbecer          #+#    #+#             */
/*   Updated: 2026/07/10 16:19:13 by marbecer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	while (0 <= i)
	{
		if (*str == (unsigned char)c)
			return (str);
		str--;
		i--;
	}
	return (NULL);
}
