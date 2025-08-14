/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:35:44 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/14 14:07:09 by mmorente         ###   ########.fr       */
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

t_stack_list	*new_node(int nbr, int index);
t_stack_list	*max_node(t_stack_list *stack);
t_stack_list	*min_node(t_stack_list *stack);
t_stack_list	*return_cheapest_node(t_stack_list *stack);
size_t			count_nb(char **src);
int				nb_founded(int *src, int nb, size_t i_nbs);
int				check_parameter(char **src, int *nbs, size_t *i_nbs);
int				validations(char **src);
int				leng_stack(t_stack_list *stack);
int				check_order(t_stack_list *a);
int				calc_meridian(t_stack_list *stack);
int				lowest(t_stack_list *a);
int				ft_abs(int nb);
int				max_value(int nb1, int nb2);
int				cheapest_cost(t_stack_list *stack);
int				not_top(t_stack_list *st_origin, t_stack_list *st_dest, int nb);
int				nb_objective(t_stack_list *stack, int nb);
void			innit_stack(t_stack_list **a, char **src);
void			s_stack(t_stack_list **stack, char movement[]);
void			r_stack(t_stack_list **stack, char movement[]);
void			rr_stack(t_stack_list **stack, char movement[]);
void			rr(t_stack_list **st_origin, t_stack_list **st_dest);
void			rrr(t_stack_list **st_origin, t_stack_list **st_dest);
void			p_st(t_stack_list **origin, t_stack_list **to_push, char mv[]);
void			push(t_stack_list **stack, t_stack_list *node);
void			push_front(t_stack_list **stack, t_stack_list *node);
void			mv_complex(t_stack_list **st_origin, t_stack_list **st_dest,
					int nb);
void			sort_3(t_stack_list **a);
void			sort_4(t_stack_list **a, t_stack_list **b);
void			sort_5(t_stack_list **a, t_stack_list **b);
void			turc_algorithm(t_stack_list **a, t_stack_list **b, int leng);
void			move_to_top(t_stack_list **stack, int nb, char mv);
void			above_or_below_meridian(t_stack_list *stack);
void			recalc_index(t_stack_list *stack);
void			determinate_cheapest(t_stack_list *stack);

void			print_stack(t_stack_list *a);


#endif