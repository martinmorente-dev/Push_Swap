/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 11:02:15 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/05 13:08:15 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	check_order(t_stack_list *a)
{
	int	compare;

	compare = a->nbr;
	while (a)
	{
		if (compare > a->nbr)
			return (0);
		a = a->next;
	}
	return (1);
}

int	lowest(t_stack_list *a)
{
	int	minor;

	minor = INT_MAX;
	while (a->next != NULL)
	{
		if (a->nbr <= minor)
			minor = a->nbr;
		a = a->next;
	}
	return (minor);
}

int	meridian(t_stack_list *stack)
{
	int	result;

	result = leng_stack(stack) / 2;
	return (result);
}

void	lowest_to_top(t_stack_list **a)
{
	int	low;

	low = lowest(*a);
	while ((*a)->nbr != low)
	{
		if ((*a)->index <= meridian(*a))
			s_stack(a, "sa\n");
		else
			rr_stack(a, "rra\n");
	}
}

void	sort_4(t_stack_list **a, t_stack_list **b)
{

	p_st(a, b, "pb\n");
	sort_3(a);
	p_st(b, a, "pa\n");
	lowest_to_top(a);
	print_stack(*a);
}
