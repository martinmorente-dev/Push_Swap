/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_stacka.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:00:53 by mmorente          #+#    #+#             */
/*   Updated: 2025/07/31 13:59:53 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sa(t_stack_list *a)
{
	int	tmp;
	int	tmp_index;

	tmp = a->nbr;
	tmp_index = a->index;

	a->nbr = a->next->nbr;
	a->index = a->next->index;
	a->next->nbr = tmp;
	a->next->index = tmp_index;
	write(1, "sa\n", 3);
}

void	ra(t_stack_list *a)
{
	int	tmp;
	int	tmp_index;

	tmp = a->nbr;
	tmp_index = a->index;
	while (a->next != NULL)
	{
		a->nbr = a->next->nbr;
		a->index = a->next->index;
		a = a->next;
	}
	a->nbr = tmp;
	a->index = tmp_index;
	write(1, "ra\n", 3);
}

void	rra(t_stack_list *a)
{
	int	tmp;
	int	tmp_index;

	while (a->next != NULL)
		a = a->next;
	tmp = a->nbr;
	tmp_index = a->index;
	while (a->prev != NULL)
	{
		a->nbr = a->prev->nbr;
		a->index = a->prev->index;
		a = a->prev;
	}
	a->nbr = tmp;
	a->index = tmp_index;
	write(1, "rra\n", 4);
}

void	pb(t_stack_list **a, t_stack_list **b)
{
	int				tmp;
	int				tmp_index;
	t_stack_list	*node;

	if (!a || !*a)
		return ;

	node = *a;
	tmp = node->nbr;
	tmp_index = node->index;

	*a = node->next;
	if (*a)
		(*a)->prev = NULL;
	stack_delone(node, del);
	push(b, new_node(tmp, tmp_index));
}
