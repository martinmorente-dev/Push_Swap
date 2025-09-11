/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:47:08 by mmorente          #+#    #+#             */
/*   Updated: 2025/09/11 14:48:58 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	leng_stack(t_stack_list *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

void	recalc_index(t_stack_list *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack->index = i;
		i++;
		stack = stack->next;
	}
}

void	free_double_pt(void **pt)
{
	int	i;

	i = 0;
	while (pt[i] != NULL)
	{
		free(pt[i]);
		i++;
	}
	free(pt);
}

void	free_stack(t_stack_list *stack)
{
	t_stack_list	*tmp;

	while (stack)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}
