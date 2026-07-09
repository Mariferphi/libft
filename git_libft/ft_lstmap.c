/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbecer <marbecer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 21:54:06 by marbecer          #+#    #+#             */
/*   Updated: 2026/07/07 18:03:42 by marbecer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*node;
	t_list	*new_lst;
	t_list	*new_node;

	if (!lst || !del || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		node = f(lst->content);
		new_node = ft_lstnew(node);
		if (!new_node)
		{
			del(node);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
