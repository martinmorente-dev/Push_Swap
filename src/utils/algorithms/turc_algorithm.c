/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turc_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:14:05 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/13 12:04:30 by mmorente         ###   ########.fr       */
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
				min_diff = tmp_b->nbr - a->nbr;
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

void	objective_node_b(t_stack_list *b, t_stack_list *a)
{
	int				min_diff;
	t_stack_list	*objective;
	t_stack_list	*tmp_a;

	while (b)
	{
		min_diff = INT_MAX;
		objective = NULL;
		tmp_a = a;
		while (tmp_a)
		{
			if ((b->nbr < tmp_a->nbr) && ((tmp_a->nbr - b->nbr) < min_diff))
			{
				min_diff = tmp_a->nbr - b->nbr ;
				objective = tmp_a;
			}
			tmp_a = tmp_a->next;
		}
		if (!objective)
			objective = min_node(a);
		b->target_node = objective;
		b = b->next;
	}
}

void	move_calc(t_stack_list *st_org, t_stack_list *st_dest)
{
	int	ra;
	int	rb;

	while (st_org)
	{
		if (st_org->above_meridian)
			ra = st_org->index;
		else
			ra = st_org->index - leng_stack(st_org);
		if (st_org->target_node->above_meridian)
			rb = st_org->target_node->index;
		else
			rb = st_org->target_node->index - leng_stack(st_dest);
		ra = ft_abs(ra);
		rb = ft_abs(rb);
		if ((st_org->above_meridian && st_org->target_node->above_meridian)
			|| (!st_org->above_meridian
				&& !st_org->target_node->above_meridian))
			st_org->push_cost = max_value(ra, rb);
		else
			st_org->push_cost = ra + rb;
		st_org = st_org->next;
	}
}

void	push_cheapest(t_stack_list **st_origin, t_stack_list **st_dest,
	char mv[])
{
	t_stack_list	*cheapest_node;
	char			*order;

	move_calc(*st_origin, *st_dest);
	cheapest_node = return_cheapest_node(*st_origin);
	order = determin_order(mv);
	mv_complex(st_origin, st_dest, order, cheapest_node->nbr);
	p_st(st_origin, st_dest, mv);
	recalc_index(*st_origin);
	recalc_index(*st_dest);
}

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
			above_or_below_meridian(*a);
			above_or_below_meridian(*b);
			objective_node_a(*a, *b);
			push_cheapest(a, b, "pb\n");
		}
		sort_3(a);
		while (leng_stack(*b) > 0)
		{
			above_or_below_meridian(*a);
			above_or_below_meridian(*b);
			objective_node_b(*b, *a);
			push_cheapest(b, a, "pa\n");
		}
		move_to_top(a, lowest(*a), 'a');
	}
}
