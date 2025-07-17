/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 09:51:56 by mmorente          #+#    #+#             */
/*   Updated: 2024/10/12 13:51:19 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 < destsize)
		ft_memcpy(dst, src, src_len + 1);
	else if (destsize != 0)
	{
		ft_memcpy(dst, src, destsize - 1);
		dst[destsize - 1] = 0;
	}
	return (src_len);
}
