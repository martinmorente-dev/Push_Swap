/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:35:44 by mmorente          #+#    #+#             */
/*   Updated: 2025/07/31 14:00:45 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H	push(&b, new_node(tmp, tmp_index));

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
size_t			lengh_int(int *nbs);
size_t			count_nb(char **src);
int				nb_founded(int *src, int nb, size_t i_nbs);
int				check_parameter(char **src, int *nbs, size_t *i_nbs);
int				validations(char **src);
int				leng_stack(t_stack_list *a);
int				check_order(t_stack_list *a);
void			innit_stack(t_stack_list **a, char **src);
void			sa(t_stack_list *a);
void			ra(t_stack_list *a);
void			rra(t_stack_list *a);
void			push(t_stack_list **stack, t_stack_list *node);
void			del(void *stack);
void			stack_delone(t_stack_list *node, void (*del)(void *));
void			pb(t_stack_list **a, t_stack_list **b);

#endif