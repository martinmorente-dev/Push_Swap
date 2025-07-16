/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:40:38 by mmorente          #+#    #+#             */
/*   Updated: 2024/09/28 11:38:36 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*buff_src;
	unsigned char	*buff_dest;

	buff_src = (unsigned char *)src;
	buff_dest = (unsigned char *)dest;
	while (n > 0)
	{
		*buff_dest = buff_src[0];
		buff_src++;
		buff_dest++;
		n--;
	}
	return (dest);
}
