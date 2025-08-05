/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 11:02:15 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/05 18:24:14 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	check_order(t_stack_list *a)
{
	while (a && a->next)
	{
		if (a->nbr > a->next->nbr)
			return (0);
		a = a->next;
	}
	return (1);
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

int	lowest_position(t_stack_list *a, int nb)
{
	int	pos;

	pos = 0;
	while (a)
	{
		if (a->nbr == nb)
			return (pos);
		pos++;
		a = a->next;
	}
	return (pos);
}

