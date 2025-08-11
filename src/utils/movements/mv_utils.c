/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:08:04 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/11 15:04:32 by mmorente         ###   ########.fr       */
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

void	move_to_top(t_stack_list **a, int nb)
{
	int	median;
	int	pos;
	int	len;

	median = calc_meridian(*a);
	pos = position(*a, nb);
	len = leng_stack(*a);
	while ((*a)->nbr != nb)
	{
		pos = position(*a, nb);
		if (pos <= median)
			r_stack(a, "ra\n");
		else
			rr_stack(a, "rra\n");
	}
}
