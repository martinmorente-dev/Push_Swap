/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:35:52 by mmorente          #+#    #+#             */
/*   Updated: 2025/07/30 14:20:05 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	t_stack_list	*a;
	t_stack_list	*b;
	t_stack_list	*tmp;

	if (argc < 2)
		return (0);
	if (!validations(argv))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	a = NULL;
	b = NULL;
	innit_stack(&a, argv);
	tmp = a;
	while (tmp)
	{
		printf("This is the position %d of the stack and its number is %d\n", tmp->index, tmp->nbr);
		tmp = tmp->next;
	}
	return (0);
}

