/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turc_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:14:05 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/06 13:49:00 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	objective_node_a(t_stack_list *a, t_stack_list *b)
{
	int				min_diff;
	t_stack_list	*objective;
	t_stack_list	*tmp_b;

	min_diff = INT_MAX;
	objective = NULL;
	tmp_b = b;
	while (a)
	{
		while (tmp_b)
		{
			if ((a->nbr > b->nbr) && ((a->nbr - b->nbr) < min_diff))
			{
				min_diff = a->nbr - b->nbr;
				objective = b;
			}
			tmp_b = tmp_b->next;
		}
		if (!objective)
			objective = max_node(b);
		a->target_node = objective;
		a = a->next;
		tmp_b = b;
	}
}
// determinate the cheapest

// movement calculation

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
			// asign objective node (a to b)
			// determinate cheapest
			// push cheapest
		}
		sort_3(a);
		while (leng_stack(*b) > 1)
		{
			// asign objective nodes (b to a)
			// determinate cheapest
			// push cheapest
		}
		(*b)->cheapest = true;
		// push cheapest
		// move lowest to top
	}
}
