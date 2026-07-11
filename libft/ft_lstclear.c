/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbecer <marbecer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 21:52:20 by marbecer          #+#    #+#             */
/*   Updated: 2026/07/07 18:03:00 by marbecer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr_node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		ptr_node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptr_node;
	}
}
