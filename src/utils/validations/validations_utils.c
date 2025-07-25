/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:51:21 by mmorente          #+#    #+#             */
/*   Updated: 2025/07/25 13:53:40 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	nb_founded(int *src, int nb)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (src[i] == nb)
			return (1);
		i++;
	}
	return (0);
}

int	check_parameter(char **src, int *nbs)
{
	int		i;
	int		nb;
	size_t	i_nbs;

	i = 0;
	i_nbs = lengh_int(nbs);
	while (src[i])
	{
		nb = ft_atoi(src[i]);
		if (nb_founded(nbs, nb))
			return (1);
		else
			nbs[i_nbs++] = nb;
		i++;
	}
	return (0);
}

size_t	lengh_int(int *nbs)
{
	size_t	i;

	i = 0;
	while (nbs[i])
	{
		i++;
	}
	return (i);
}
