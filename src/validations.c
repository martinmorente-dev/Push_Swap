/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:07:01 by mmorente          #+#    #+#             */
/*   Updated: 2025/07/16 15:22:42 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  The error need to be displayed like this Error\n

 * TODO If there is a double number
 */
#include "push_swap.h"

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
	int	i;
	int	nb;

	i = 0;
	while (src[i])
	{
		nb = ft_atoi(src[i]);
		if (nb > INT_MAX)
			return (1);
		else if (nb < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	validations(char **src, int len)
{
	int		i;
	int		j;

	i = 0;
	while (src[i])
	{
		j = 0;
		while (src[i][j])
		{
			if (character_found(src[i][j]))
				return (0);
			else if (overpass_int(src[i][j]))
				return (0);
			j++;
		}
	}
}
