/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:38:58 by mmorente          #+#    #+#             */
/*   Updated: 2024/10/01 20:01:11 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystak, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystak);
	while (i < len && haystak[i])
	{
		while (haystak[i + j] == needle[j] && haystak[i] && i + j < len)
		{
			j++;
			if (needle[j] == 0)
				return ((char *)needle);
		}
		i++;
		j = 0;
	}
	return (0);
}
