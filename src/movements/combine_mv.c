/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combine_mv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 10:30:34 by mmorente          #+#    #+#             */
/*   Updated: 2025/09/11 14:52:43 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_stack_list **st_origin, t_stack_list **st_dest)
{
	r_stack(st_origin, NULL);
	r_stack(st_dest, NULL);
	recalc_index(*st_origin);
	recalc_index(*st_dest);
	write(1, "rr\n", 3);
}

void	rrr(t_stack_list **st_origin, t_stack_list **st_dest)
{
	rr_stack(st_origin, NULL);
	rr_stack(st_dest, NULL);
	recalc_index(*st_origin);
	recalc_index(*st_dest);
	write(1, "rrr\n", 4);
}
