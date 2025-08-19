/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 11:02:15 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/19 09:28:24 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	check_order(t_stack_list *a)
{
	while (a && a->next)
	{
		if (a->nbr > a->next->nbr)
			return (0);
		a = a->next;
	}
	return (1);
}

int	calc_meridian(t_stack_list *stack)
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

t_stack_list	*min_node(t_stack_list *stack)
{
	t_stack_list	*node_find;

	node_find = stack;
	stack = stack->next;
	while (stack)
	{
		if (stack->nbr < node_find->nbr)
			node_find = stack;
		stack = stack -> next;
	}
	return (node_find);
}
