/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 09:50:05 by mmorente          #+#    #+#             */
/*   Updated: 2024/10/12 14:19:47 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n && (s1[i] != '\0' || (s2[i] != '\0')))
	{
		if ((unsigned char ) s1[i] != (unsigned char) s2[i])
			return ((unsigned char)s1[i] - (unsigned char )s2[i]);
		i++;
	}
	return (0);
}
