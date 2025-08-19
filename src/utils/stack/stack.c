/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 13:54:45 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/19 09:34:24 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack_list	*new_node(int nbr, int index)
{
	t_stack_list	*node;

	node = malloc(sizeof(t_stack_list));
	if (!node)
		return (NULL);
	node->nbr = nbr;
	node->index = index;
	node->push_cost = -1;
	node->above_meridian = false;
	node->cheapest = false;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

void	push(t_stack_list **stack, t_stack_list *node)
{
	t_stack_list	*tmp;

	if (!node)
		return ;
	tmp = 0;
	node->next = NULL;
	if (*stack == NULL)
	{
		node->prev = NULL;
		*stack = node;
	}
	else
	{
		tmp = *stack;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
		node->prev = tmp;
	}
}

void	innit_stack(t_stack_list **a, char **src)
{
	int		i;
	int		j;
	int		nb;
	char	**buffer;
	int		index_global;

	i = 1;
	index_global = 0;
	while (src[i])
	{
		buffer = ft_split(src[i], ' ');
		j = 0;
		while (buffer[j])
		{
			nb = ft_atoi(buffer[j]);
			push(a, new_node(nb, index_global));
			index_global++;
			j++;
		}
		i++;
	}
}
