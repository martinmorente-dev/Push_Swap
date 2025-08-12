/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:08:04 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/12 17:12:48 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push_front(t_stack_list **stack, t_stack_list *node)
{
	node->next = *stack;
	node->prev = NULL;

	if (*stack)
		(*stack)->prev = node;
	*stack = node;
}

int	position(t_stack_list *a, int nb)
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


void	move_to_top(t_stack_list **stack, int nb, char mv[])
{
	int	median;
	int	pos;

	median = calc_meridian(*stack);
	pos = position(*stack, nb);
	while ((*stack)->nbr != nb)
	{
		pos = position(*stack, nb);
		if (pos <= median)
		{
			if (mv[0] == 'a')
				r_stack(stack, "ra\n");
			else
				r_stack(stack, "rb\n");
		}
		else
		{
			if (mv[0] == 'a')
				rr_stack(stack, "rra\n");
			else
				rr_stack(stack, "rrb\n");
		}
	}
}
