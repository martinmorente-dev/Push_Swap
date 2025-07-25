/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:35:44 by mmorente          #+#    #+#             */
/*   Updated: 2025/07/25 13:48:27 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../Libft/libft.h"
# include <stdio.h>
# include <limits.h>
# include <stdbool.h>

typedef struct t_stack_list
{
	int					nbr;
	int					index;
	int					push_cost;
	bool				above_meridian;
	bool				cheapest;

	struct t_stack_list	*next;
	struct t_stack_list	*prev;
	struct t_stack_list	*target_node;
}	t_stack_list;

int		nb_founded(int *src, int nb);
int		check_parameter(char **src, int *nbs);
size_t	lengh_int(int *nbs);
int		validations(char **src, int argc);

#endif