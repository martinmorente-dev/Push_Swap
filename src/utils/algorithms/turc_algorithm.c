/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turc_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:14:05 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/06 12:15:12 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

// asign the objective node

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
