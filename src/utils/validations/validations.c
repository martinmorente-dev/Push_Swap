/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:07:01 by mmorente          #+#    #+#             */
/*   Updated: 2025/07/28 14:38:19 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	character_found(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (src[i] >= 'a' && src[i] <= 'z')
			return (1);
		else if (src[i] >= 'A' && src[i] <= 'Z')
			return (1);
		i++;
	}
	return (0);
}

int	overpass_int(char *src)
{
	int		i;
	int		nb;
	char	**nbs;

	i = 0;
	nbs = ft_split(src, ' ');
	nb = 0;
	while (nbs[i])
	{
		nb = ft_atoi(nbs[i]);
		if (nb > INT_MAX)
			return (1);
		else if (nb < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	double_nb_finded(char **src, int argc)
{
	int		*nbs;
	char	**buffer;

	nbs = ft_calloc(255, sizeof(int *));
	if (!nbs)
		return (1);
	while (argc > 0)
	{
		buffer = ft_split(src[argc], ' ');
		if (check_parameter(buffer, nbs))
			return (1);
		argc--;
	}
	free(nbs);
	return (0);
}

int	validations(char **src, int argc)
{
	int		i;

	i = 1;
	while (src[i])
	{
		if (character_found(src[i]))
			return (0);
		else if (overpass_int(src[i]))
			return (0);
		i++;
	}
	if (double_nb_finded(src, argc))
		return (0);
	return (1);
}
