/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:00:53 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/19 09:33:07 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	s_stack(t_stack_list **stack, char movement[])
{
	t_stack_list	*first;
	t_stack_list	*second;

	first = *stack;
	second = first->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->prev = NULL;
	second->next = first;
	first->prev = second;
	*stack = second;
	recalc_index(*stack);
	write(1, movement, 3);
}

void	r_stack(t_stack_list **stack, char movement[])
{
	t_stack_list	*first;
	t_stack_list	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = *stack;
	while (last->next)
		last = last->next;
	*stack = first->next;
	first->next = NULL;
	first->prev = last;
	last->next = first;
	recalc_index(*stack);
	if (movement)
		write(1, movement, 3);
}

void	rr_stack(t_stack_list **stack, char movement[])
{
	t_stack_list	*last;

	last = *stack;
	while (last->next)
		last = last->next;
	if (last->prev)
		last->prev->next = NULL;
	last->prev = NULL;
	last->next = *stack;
	(*stack)->prev = last;
	*stack = last;
	recalc_index(*stack);
	if (movement)
		write(1, movement, 4);
}

void	p_st(t_stack_list **origin, t_stack_list **to_push, char mv[])
{
	t_stack_list	*node;

	node = *origin;
	*origin = node->next;
	if (*origin)
		(*origin)->prev = NULL;
	push_front(to_push, node);
	recalc_index(*origin);
	recalc_index(*to_push);
	write(1, mv, 3);
}
