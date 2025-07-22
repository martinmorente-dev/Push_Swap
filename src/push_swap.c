/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:35:52 by mmorente          #+#    #+#             */
/*   Updated: 2025/07/22 12:56:30 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	main(int argc, char *argv[])
{
	int	i;

	if (argc < 2)
		return (0);
	i = 1;
	if (!validations(argv, argc - 1))
	{
		write(2, "Error\n", 6);
	}
}
