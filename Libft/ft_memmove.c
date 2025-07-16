/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:10:02 by mmorente          #+#    #+#             */
/*   Updated: 2024/10/10 18:37:43 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*buff_src;
	char	*buff_dest;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	buff_src = (char *)src;
	buff_dest = (char *)dest;
	i = 0;
	if (dest > src)
	{
		while (n-- > 0)
			buff_dest[n] = buff_src[n];
	}
	else
		while (i++ > 0)
			buff_dest[i] = buff_src[i];
	return (dest);
}
