/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turc_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:14:05 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/07 13:11:55 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	objective_node_a(t_stack_list *a, t_stack_list *b)
{
	int				min_diff;
	t_stack_list	*objective;
	t_stack_list	*tmp_b;

	while (a)
	{
		min_diff = INT_MAX;
		objective = NULL;
		tmp_b = b;
		while (tmp_b)
		{
			if ((a->nbr < tmp_b->nbr) && ((tmp_b->nbr - a->nbr) < min_diff))
			{
				min_diff = a->nbr - tmp_b->nbr;
				objective = tmp_b;
			}
			tmp_b = tmp_b->next;
		}
		if (!objective)
			objective = max_node(b);
		a->target_node = objective;
		a = a->next;
	}
}
// determinate the cheapest

int	move_calc(t_stack_list *st, int nb)
{
	int	movements;

	movements = 1;
	while (st->nbr != nb)
	{
		if (st->above_meridian)
			movements++;
	}
	return (movements);
}

// principal function
void	turc_algorithm(t_stack_list **a, t_stack_list **b, int leng)
{
	if (leng == 4)
		sort_4(a, b);
	if (leng == 5)
		sort_5(a, b);
	else
	{
		p_st(a, b, "pb\n");
		p_st(a, b, "pb\n");
		while (leng_stack(*a) > 3)
		{
			objective_node_a(*a, *b);
			// determinate cheapest
			// push_cheapest
		}
	/*	sort_3(a);
		while (leng_stack(*b) > 1)
		{
			// asign objective nodes (b to a)
			// determinate cheapest
			// push cheapest
		}
		(*b)->cheapest = true;
		// push cheapest
		// move lowest to top
	*/
	}
}
