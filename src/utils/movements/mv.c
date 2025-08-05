/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:00:53 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/05 13:05:28 by mmorente         ###   ########.fr       */
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
	write(1, movement, 3);
}


void	r_stack(t_stack_list *stack, char movement[])
{
	int	tmp;
	int	tmp_index;

	tmp = stack->nbr;
	tmp_index = stack->index;
	while (stack->next != NULL)
	{
		stack->nbr = stack->next->nbr;
		stack->index = stack->next->index;
		stack = stack->next;
	}
	stack->nbr = tmp;
	stack->index = tmp_index;
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

	write(1, movement, 4);
}


void	p_st(t_stack_list **origin, t_stack_list **to_push, char mv[])
{
	int				tmp;
	int				tmp_index;
	t_stack_list	*node;

	node = *origin;
	tmp = node->nbr;
	tmp_index = node->index;
	*origin = node->next;
	if (*origin)
		(*origin)->prev = NULL;
	push_front(to_push, node);
	write(1, mv, 3);
}
