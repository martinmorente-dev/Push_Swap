/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turc_algorithm_utils2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:12:29 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/19 09:29:39 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack_list	*return_cheapest_node(t_stack_list *stack)
{
	t_stack_list	*cheap_node;

	cheap_node = NULL;
	determinate_cheapest(stack);
	while (stack)
	{
		if (stack->cheapest)
		{
			cheap_node = stack;
			break ;
		}
		stack = stack->next;
	}
	return (cheap_node);
}

int	nb_objective(t_stack_list *stack, int nb)
{
	while (stack)
	{
		if (stack->nbr == nb)
			return (stack->target_node->nbr);
		stack = stack->next;
	}
	return (-1);
}

int	not_top(t_stack_list *st_origin, t_stack_list *st_dest, int nb)
{
	int	nb_obj;

	nb_obj = nb_objective(st_origin, nb);
	if (st_origin->nbr != nb && st_dest->nbr != nb_obj)
		return (1);
	else
		return (0);
}
