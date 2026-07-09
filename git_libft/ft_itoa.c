/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbecer <marbecer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 21:25:19 by marbecer          #+#    #+#             */
/*   Updated: 2026/07/07 18:01:49 by marbecer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int		digits;
	long	n_long;

	n_long = (long)n;
	digits = 1;
	if (n_long < 0)
	{
		n_long *= -1;
		digits++;
	}
	while (n_long >= 10)
	{
		n_long /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		digits;
	long	n_long;

	digits = count_digits(n);
	num = malloc(digits + 1);
	if (!num)
		return (NULL);
	num[digits] = '\0';
	n_long = (long)n;
	if (n_long < 0)
	{
		num[0] = '-';
		n_long *= -1;
	}
	if (n_long == 0)
		num[0] = '0';
	while (n_long > 0)
	{
		num[--digits] = (n_long % 10) + '0';
		n_long /= 10;
	}
	return (num);
}
// int	main(void)
// {
// 	char	*str;

// 	str = ft_itoa(12345);
// 	printf("12345 -> %s\n", str);
// 	free(str);

// 	str = ft_itoa(-42);
// 	printf("-42 -> %s\n", str);
// 	free(str);

// 	str = ft_itoa(0);
// 	printf("0 -> %s\n", str);
// 	free(str);

// 	return (0);
// }