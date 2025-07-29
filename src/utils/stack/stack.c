/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 13:54:45 by mmorente          #+#    #+#             */
/*   Updated: 2025/07/29 13:01:22 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack_list	*new_node(int nbr, int index)
{
	t_stack_list	*node;

	node = malloc(sizeof(t_stack_list));

	if (!node)
		return (NULL);

	node->nbr = nbr;
	node->index = index;
	node->push_cost = -1;
	node->above_meridian = false;
	node->cheapest = false;
	node->next = NULL;
	node->prev = NULL;

	return (node);
}

void	push(t_stack_list **stack, t_stack_list *node)
{
	if (!node)
		return (NULL);

	node->next = *stack;
	node->prev = NULL;

	if (*stack)
		(*stack)->prev = node;

	*stack = node;
}
