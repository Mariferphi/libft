/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbecer <marbecer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 21:22:59 by marbecer          #+#    #+#             */
/*   Updated: 2026/07/10 16:47:30 by marbecer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_w(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*fill_word(char const *s, char c)
{
	int		j;
	char	*str;

	j = 0;
	while (s[j] && s[j] != c)
		j++;
	str = malloc(j + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (s[j] && s[j] != c)
	{
		str[j] = s[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	**free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		words;
	int		i;

	if (!s)
		return (NULL);
	words = count_w(s, c);
	arr = malloc((words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		if (*s != c)
		{
			arr[i] = fill_word(s, c);
			if (!arr[i])
				return (free_arr(arr));
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	arr[i] = NULL;
	return (arr);
}
