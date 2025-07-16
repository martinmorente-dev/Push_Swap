/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:20:25 by mmorente          #+#    #+#             */
/*   Updated: 2024/10/12 11:05:05 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	size_t	size_new;

	size_new = ft_lstsize(lst);
	new_list = malloc(size_new * sizeof(t_list));
	if (!new_list)
		return (NULL);
	while (lst)
	{
		new_list = f(lst->next);
		lst = lst->next;
	}
	if (!new_list)
	{
		ft_lstclear(&new_list, del);
		free(new_list);
	}
	return (new_list);
}
