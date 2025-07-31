/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:35:52 by mmorente          #+#    #+#             */
/*   Updated: 2025/07/31 14:00:55 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"
#include <stdio.h>


void	print_stack(t_stack_list *a)
{
	while (a)
	{
		printf("Number: %d with index: %d\n", a->nbr, a->index);
		a = a->next;
	}
}

int	main(int argc, char *argv[])
{
	t_stack_list	*a;
	t_stack_list	*b;
	int				l_stack;

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
	l_stack = leng_stack(a);
	if (check_order(a))
		return (0);
	if (l_stack <= 3)
	{
		printf("Before \n:");
		print_stack(a);
		printf("After: \n");
		pb(&a, &b);
		printf("Stakc B\n");
		print_stack(b);
		printf("Stakc A\n");
		print_stack(a);
	}
	else
		return (1);
	return (0);
}


