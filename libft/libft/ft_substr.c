/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbecer <marbecer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 20:00:38 by marbecer          #+#    #+#             */
/*   Updated: 2026/07/03 20:35:47 by marbecer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = start;
	while (s[i] && i < len)
		i++;
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	j = 0;
	i = start;
	while (s[i] && i < len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = NULL;
	return (str);
}
