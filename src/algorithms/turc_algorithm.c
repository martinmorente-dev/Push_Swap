/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turc_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:14:05 by mmorente          #+#    #+#             */
/*   Updated: 2025/09/11 14:50:38 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	objective_node(t_stack_list *a, t_stack_list *b)
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
			if (tmp_b->nbr < a->nbr && (a->nbr - tmp_b->nbr) < min_diff)
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

void	move_calc(t_stack_list *st_org, t_stack_list *st_dest,
	int len_org, int len_dest)
{
	int	ra;
	int	rb;
	int	median;
	int	median_dest;

	recalc_index(st_org);
	recalc_index(st_dest);
	median = calc_meridian(st_org);
	median_dest = calc_meridian(st_dest);
	while (st_org)
	{
		if (st_org->index <= median)
			ra = st_org->index;
		else
			ra = st_org->index - len_org;
		if (st_org->target_node->index <= median_dest)
			rb = st_org->target_node->index;
		else
			rb = st_org->target_node->index - len_dest;
		if ((ra >= 0 && rb >= 0) || (ra < 0 && rb < 0))
			st_org->push_cost = max_value(ft_abs(ra), ft_abs(rb));
		else
			st_org->push_cost = ft_abs(ra) + ft_abs(rb);
		st_org = st_org->next;
	}
}

void	push_cheapest(t_stack_list **st_origin, t_stack_list **st_dest)
{
	t_stack_list	*cheapest_node;

	move_calc(*st_origin, *st_dest, leng_stack(*st_origin),
		leng_stack(*st_dest));
	cheapest_node = return_cheapest_node(*st_origin);
	mv_complex(st_origin, st_dest, cheapest_node->nbr);
	p_st(st_origin, st_dest, "pb\n");
	recalc_index(*st_origin);
	recalc_index(*st_dest);
}

void	turc_algorithm(t_stack_list **a, t_stack_list **b, int leng)
{
	if (leng == 4)
		sort_4(a, b);
	else if (leng == 5)
		sort_5(a, b);
	else
	{
		p_st(a, b, "pb\n");
		p_st(a, b, "pb\n");
		while ((leng_stack(*a)))
		{
			above_or_below_meridian(*a);
			above_or_below_meridian(*b);
			objective_node(*a, *b);
			push_cheapest(a, b);
		}
		move_to_top(b, max_node(*b)->nbr, 'b');
		while (leng_stack(*b))
			p_st(b, a, "pa\n");
	}
}
