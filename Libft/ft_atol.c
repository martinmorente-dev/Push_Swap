/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 09:25:05 by mmorente          #+#    #+#             */
/*   Updated: 2025/07/30 10:47:33 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *nptr)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' && nptr[i + 1] != '-')
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (nptr[i] && nptr[i] >= 48 && nptr[i] <= 57)
	{
		result *= 10;
		result += nptr[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}
