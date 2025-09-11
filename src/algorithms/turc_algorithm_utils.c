/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turc_algorithm_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:11:27 by mmorente          #+#    #+#             */
/*   Updated: 2025/09/11 14:50:01 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	above_or_below_meridian(t_stack_list *stack)
{
	int	meridian;

	meridian = calc_meridian(stack);
	while (stack)
	{
		if (stack->index <= meridian)
			stack->above_meridian = true;
		else
			stack->above_meridian = false;
		stack = stack->next;
	}
}

int	ft_abs(int nb)
{
	if (nb < 0)
		nb *= -1;
	return (nb);
}

int	max_value(int nb1, int nb2)
{
	if (nb1 > nb2)
		return (nb1);
	else
		return (nb2);
}

int	cheapest_cost(t_stack_list *stack)
{
	int	cheapest;

	cheapest = INT_MAX;
	while (stack)
	{
		stack->cheapest = false;
		if (stack->push_cost < cheapest)
			cheapest = stack->push_cost;
		stack = stack->next;
	}
	return (cheapest);
}

void	determinate_cheapest(t_stack_list *stack)
{
	int	cheapest;

	cheapest = cheapest_cost(stack);
	while (stack)
	{
		if (stack->push_cost == cheapest)
			stack->cheapest = true;
		else
			stack->cheapest = false;
		stack = stack->next;
	}
}
