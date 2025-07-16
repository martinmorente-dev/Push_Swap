/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:44:03 by mmorente          #+#    #+#             */
/*   Updated: 2024/09/28 12:46:04 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	count, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = malloc(count * size);
	if (!temp)
		return (NULL);
	while (i < count * size)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}
