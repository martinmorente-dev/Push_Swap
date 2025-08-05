/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:25:49 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/05 19:55:26 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	biggest(t_stack_list *a)
{
	int	num;

	num = a->nbr;
	while (a)
	{
		if (a->nbr > num)
			num = a->nbr;
		a = a->next;
	}
	return (num);
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
	lowest_to_top(a, low);
	p_st(a, b, "pb\n");
	sort_3(a);
	p_st(b, a, "pa\n");
}
