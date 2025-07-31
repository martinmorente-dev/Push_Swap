/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 11:02:15 by mmorente          #+#    #+#             */
/*   Updated: 2025/07/31 11:05:38 by mmorente         ###   ########.fr       */
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
