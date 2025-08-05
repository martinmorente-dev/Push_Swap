/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorith_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:25:49 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/05 13:04:46 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_3(t_stack_list **a)
{
	t_stack_list	*tmp;

	tmp = *a;
	while (tmp->next != NULL)
	{
		if (tmp->nbr > tmp->next->nbr)
			s_stack(a, "sa\n");
		tmp = tmp->next;
	}
}

