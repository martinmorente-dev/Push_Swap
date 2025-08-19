/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:08:04 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/19 09:32:24 by mmorente         ###   ########.fr       */
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

void	mv_complex(t_stack_list **st_origin, t_stack_list **st_dest, int nb)
{
	int	median;
	int	median_dest;
	int	nb_obj;
	int	pos;
	int	pos_dst;

	nb_obj = nb_objective(*st_origin, nb);
	while ((*st_origin)->nbr != nb || (*st_dest)->nbr != nb_obj)
	{
		median = calc_meridian(*st_origin);
		median_dest = calc_meridian(*st_dest);
		pos = position(*st_origin, nb);
		pos_dst = position(*st_dest, nb_obj);
		if (pos <= median && pos_dst <= median_dest
			&& not_top(*st_origin, *st_dest, nb))
			rr(st_origin, st_dest);
		else if (pos >= median && pos_dst >= median_dest
			&& not_top(*st_origin, *st_dest, nb))
			rrr(st_origin, st_dest);
		else
		{
			move_to_top(st_origin, nb, 'a');
			move_to_top(st_dest, nb_obj, 'b');
		}
	}
}

void	move_to_top(t_stack_list **stack, int nb, char mv)
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
			if (mv == 'a')
				r_stack(stack, "ra\n");
			else
				r_stack(stack, "rb\n");
		}
		else
		{
			if (mv == 'a')
				rr_stack(stack, "rra\n");
			else
				rr_stack(stack, "rrb\n");
		}
	}
}
