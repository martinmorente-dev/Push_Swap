/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:00:53 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/04 13:56:01 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	s_stack(t_stack_list *stack, char movement[])
{
	int	tmp;
	int	tmp_index;

	tmp = stack->nbr;
	tmp_index = stack->index;

	stack->nbr = stack->next->nbr;
	stack->index = stack->next->index;
	stack->next->nbr = tmp;
	stack->next->index = tmp_index;
	write(1, movement, 3);
}

void	r_stack(t_stack_list *stack, char movement[])
{
	int	tmp;
	int	tmp_index;

	tmp = stack->nbr;
	tmp_index = stack->index;
	while (stack->next != NULL)
	{
		stack->nbr = stack->next->nbr;
		stack->index = stack->next->index;
		stack = stack->next;
	}
	stack->nbr = tmp;
	stack->index = tmp_index;
	write(1, &movement, 3);
}

void	rr_stack(t_stack_list *stack, char movement[])
{
	int	tmp;
	int	tmp_index;

	while (stack->next != NULL)
		stack = stack->next;
	tmp = stack->nbr;
	tmp_index = stack->index;
	while (stack->prev != NULL)
	{
		stack->nbr = stack->prev->nbr;
		stack->index = stack->prev->index;
		stack = stack->prev;
	}
	stack->nbr = tmp;
	stack->index = tmp_index;
	write(1, &movement, 4);
}

void	p_st(t_stack_list **st1, t_stack_list **st2, char movement[])
{
	int				tmp;
	int				tmp_index;
	t_stack_list	*node;

	if (!st1 || !*st1)
		return ;

	node = *st1;
	tmp = node->nbr;
	tmp_index = node->index;

	*st1 = node->next;
	if (*st1)
		(*st1)->prev = NULL;
	stack_delone(node, del);
	push(st2, new_node(tmp, tmp_index));
	write(1, &movement, 3);
}
