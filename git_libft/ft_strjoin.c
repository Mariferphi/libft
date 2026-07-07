/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbecer <marbecer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 20:38:09 by marbecer          #+#    #+#             */
/*   Updated: 2026/07/04 18:33:35 by marbecer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		s1_len;
	int		s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = malloc(s1_len + s2_len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i] || s2[i])
	{
		if (i < s1_len)
			str[i] = s1[i];
		if (i < s2_len)
			str[i + s1_len] = s2[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
// int main()
// {
// 	char	*str1 = "HOLA ";
// 	char	*str2 = "MIAU";
// 	char	*strs = ft_strjoin(str1, str2);
// 	printf("%s", strs);
// 	free(strs);
// 	return (0);
// }