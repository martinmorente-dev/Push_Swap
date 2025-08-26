/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:35:52 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/26 12:30:56 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

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
	else if (l_stack <= 3)
		sort_3(&a);
	else
		turc_algorithm(&a, &b, l_stack);
	free_stack(a);
	free_stack(b);
	return (0);
}
