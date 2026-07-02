/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbecer <marbecer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 15:30:07 by marbecer          #+#    #+#             */
/*   Updated: 2026/07/02 20:09:22 by marbecer         ###   ########.fr       */
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
	while (i != 0)
	{
		if (*str == c)
			return (str);
		str--;
		i--;
	}
	return ((char *)s);
}
