/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:51:21 by mmorente          #+#    #+#             */
/*   Updated: 2025/07/30 11:38:19 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	nb_founded(int *src, int nb, size_t i_nbs)
{
	size_t	i;

	i = 0;
	while (i < i_nbs)
	{
		if (src[i] == nb)
			return (1);
		i++;
	}
	return (0);
}

int	check_parameter(char **src, int *nbs, size_t *i_nbs)
{
	int		i;
	int		nb;

	i = 0;
	while (src[i])
	{
		nb = ft_atoi(src[i]);
		if (nb_founded(nbs, nb, *i_nbs))
			return (1);
		else
			nbs[(*i_nbs)++] = nb;
		i++;
	}
	return (0);
}

size_t	count_nb(char **src)
{
	size_t	count;
	char	**buffer;
	int		i;
	int		j;

	count = 0;
	i = 1;
	while (src[i])
	{
		buffer = ft_split(src[i], ' ');
		j = 0;
		while (buffer[j])
		{
			j++;
			count++;
		}
		i++;
	}
	return (count);
}
