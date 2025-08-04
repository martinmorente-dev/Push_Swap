/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorith_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:25:49 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/04 13:55:21 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_3(t_stack_list *a)
{
	while (a->next != NULL)
	{
		if (a->nbr > a->next->nbr)
			s_stack(a, "sa\n");
		a = a->next;
	}
	if (check_order(a))
		return ;
	else
		sort_3(a);
}
