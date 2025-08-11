/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:25:49 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/11 12:42:15 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	biggest(t_stack_list *stack)
{
	int	num;

	num = stack->nbr;
	while (stack)
	{
		if (stack->nbr > num)
			num = stack->nbr;
		stack = stack->next;
	}
	return (num);
}

int	lowest(t_stack_list *a)
{
	int	result;

	result = INT_MAX;
	while (a)
	{
		if (a->nbr < result)
			result = a->nbr;
		a = a->next;
	}
	return (result);
}

void	sort_3(t_stack_list **a)
{
	int	num_big;

	num_big = biggest(*a);
	if ((*a)->nbr == num_big)
		r_stack(a, "ra\n");
	else if ((*a)->next->nbr == num_big)
		rr_stack(a, "rra\n");
	if ((*a)->nbr > (*a)->next->nbr)
		s_stack(a, "sa\n");
}

void	sort_4(t_stack_list **a, t_stack_list **b)
{
	int	low;

	low = lowest(*a);
	move_to_top(a, low);
	p_st(a, b, "pb\n");
	sort_3(a);
	p_st(b, a, "pa\n");
}

void	sort_5(t_stack_list **a, t_stack_list **b)
{
	int	low;
	int	big;

	low = lowest(*a);
	move_to_top(a, low);
	p_st(a, b, "pb\n");
	low = lowest(*a);
	move_to_top(a, low);
	p_st(a, b, "pb\n");
	sort_3(a);
	big = biggest(*b);
	move_to_top(b, big);
	p_st(b, a, "pa\n");
	p_st(b, a, "pa\n");
}
