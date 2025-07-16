/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:49:55 by mmorente          #+#    #+#             */
/*   Updated: 2024/09/28 11:39:30 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*buff;

	buff = (unsigned char *)s;
	while (n > 0)
	{
		*buff = (unsigned char)c;
		buff++;
		n--;
	}
	return (s);
}
