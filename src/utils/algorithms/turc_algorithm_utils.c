/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turc_algorithm_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:11:27 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/06 13:35:40 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	lowest_position(t_stack_list *a, int nb)
{
	int	pos;

	pos = 0;
	while (a)
	{
		if (a->nbr == nb)
			return (pos);
		pos++;
		a = a->next;
	}
	return (pos);
}

void	move_to_top(t_stack_list **a, int nb)
{
	int	median;
	int	low_pos;
	int	len;

	median = meridian(*a);
	low_pos = lowest_position(*a, nb);
	len = leng_stack(*a);
	while ((*a)->nbr != nb)
	{
		low_pos = lowest_position(*a, nb);
		if (low_pos <= median)
			r_stack(a, "ra\n");
		else
			rr_stack(a, "rra\n");
	}
}

int	meridian(t_stack_list *stack)
{
	int	result;

	result = leng_stack(stack) / 2;
	return (result);
}

t_stack_list	*max_node(t_stack_list *stack)
{
	t_stack_list	*node_find;

	node_find = stack;
	stack = stack->next;
	while (stack)
	{
		if (stack->nbr > node_find->nbr)
			node_find = stack;
		stack = stack -> next;
	}
	return (node_find);
}
