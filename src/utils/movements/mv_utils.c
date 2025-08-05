/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:08:04 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/05 12:09:57 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push_front(t_stack_list **stack, t_stack_list *node)
{
	node->next = *stack;
	node->prev = NULL;

	if (*stack)
		(*stack)->prev = node;
	*stack = node;
}
