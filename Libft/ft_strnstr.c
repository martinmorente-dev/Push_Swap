/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:38:58 by mmorente          #+#    #+#             */
/*   Updated: 2024/10/12 14:24:19 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystak, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystak);
	while (i < len && haystak[i])
	{
		while (haystak[i + j] == needle[j] && haystak[i + j] && i + j < len)
		{
			j++;
			if (needle[j] == 0)
				return ((char *)haystak + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
