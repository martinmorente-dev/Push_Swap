/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:46:40 by mmorente          #+#    #+#             */
/*   Updated: 2024/10/12 19:31:33 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	to_find;

	str = (unsigned char *)s;
	to_find = (unsigned char )c;
	i = 0;
	while (i < n)
	{
		if (str[i] == to_find)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
