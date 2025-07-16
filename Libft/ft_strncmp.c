/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martin <martin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 09:50:05 by mmorente          #+#    #+#             */
/*   Updated: 2024/09/26 17:10:20 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	int			s1_len;
	int			s2_len;
	int			comparison;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	comparison = 0;
	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			comparison = (unsigned char )s1[i] - (unsigned char )s2[i];
		i++;
	}
	if (s1_len > s2_len)
		comparison = comparison * (-1);
	else
		comparison = comparison * (+1);
	return (comparison);
}
