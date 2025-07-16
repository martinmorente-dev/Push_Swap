/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:48:33 by mmorente          #+#    #+#             */
/*   Updated: 2024/09/28 13:07:39 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*new_string;

	s_len = ft_strlen(s);
	new_string = (char *)malloc(s_len * sizeof(char));
	if (!new_string)
		return (NULL);
	ft_memcpy(new_string, s, s_len);
	return (new_string);
}
