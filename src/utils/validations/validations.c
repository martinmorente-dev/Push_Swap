/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:07:01 by mmorente          #+#    #+#             */
/*   Updated: 2025/07/30 11:51:15 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	double_nb_finded(char **src)
{
	int			*nbs;
	char		**buffer;
	int			argc;
	size_t		i_nbs;
	size_t		c_nb;

	i_nbs = 0;
	c_nb = count_nb(src);
	nbs = ft_calloc(c_nb, sizeof(int *));
	if (!nbs)
		return (1);
	argc = 1;
	while (src[argc])
	{
		buffer = ft_split(src[argc], ' ');
		if (check_parameter(buffer, nbs, &i_nbs))
			return (1);
		argc++;
	}
	free(nbs);
	return (0);
}

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
		i++;
	}
	return (1);
}

int	validations(char **src)
{
	int		i;

	i = 1;
	while (src[i])
	{
		if (character_found(src[i]))
			return (0);
		else if (overpass_int(src[i]))
			return (0);
		else if (!valid_integer(src[i]))
			return (0);
		i++;
	}
	if (double_nb_finded(src))
		return (0);
	return (1);
}
