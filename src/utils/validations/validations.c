/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:07:01 by mmorente          #+#    #+#             */
/*   Updated: 2025/08/26 13:20:34 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	double_nb_finded(char **src)
{
	int			*nbs;
	char		**buffer;
	int			argc;

	nbs = ft_calloc(count_nb(src), sizeof(int *));
	if (!nbs)
		return (1);
	argc = 1;
	while (src[argc])
	{
		buffer = ft_split(src[argc], ' ');
		if (check_parameter(buffer, nbs, 0))
		{
			free(nbs);
			free_double_pt((void *)buffer);
			return (1);
		}
		free_double_pt((void **)buffer);
		argc++;
	}
	free(nbs);
	return (0);
}

int	overpass_int(char *src)
{
	int		i;
	long	nb;
	char	**nbs;

	i = 0;
	nbs = ft_split(src, ' ');
	nb = 0;
	while (nbs[i])
	{
		nb = ft_atol(nbs[i]);
		if (nb > INT_MAX)
			return (1);
		else if (nb < INT_MIN)
			return (1);
		i++;
	}
	free_double_pt((void **)nbs);
	return (0);
}

int	double_symbol_found(char *src)
{
	int		i;
	int		symbol_count;

	i = 0;
	symbol_count = 0;
	while (src[i])
	{
		if (src[i] == '+' || src[i] == '-')
			symbol_count++;
		i++;
	}
	if (symbol_count > 1)
		return (1);
	else
		return (0);
}


int	valid_integer(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (src[i] == '.' || src[i] == ',')
			return (0);
		else if (src[i] >= 'a' && src[i] <= 'z')
			return (0);
		else if (src[i] >= 'A' && src[i] <= 'Z')
			return (0);
		i++;
	}
	if (double_symbol_found(src))
		return (0);
	return (1);
}

int	validations(char **src)
{
	int		i;

	i = 1;
	while (src[i])
	{
		if (!valid_integer(src[i]))
			return (0);
		else if (overpass_int(src[i]))
			return (0);
		i++;
	}
	if (double_nb_finded(src))
		return (0);
	return (1);
}
