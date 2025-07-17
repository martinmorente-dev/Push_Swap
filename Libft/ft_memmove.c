/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:10:02 by mmorente          #+#    #+#             */
/*   Updated: 2024/10/12 13:04:34 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*buff_src;
	unsigned char	*buff_dest;

	if (!dest && !src)
		return (NULL);
	buff_src = (unsigned char *)src;
	buff_dest = (unsigned char *)dest;
	if (buff_dest < buff_src)
	{
		while (n--)
			*buff_dest++ = *buff_src++;
	}
	else
	{
		buff_src += n;
		buff_dest += n;
		while (n--)
			*(--buff_dest) = *(--buff_src);
	}
	return (dest);
}
