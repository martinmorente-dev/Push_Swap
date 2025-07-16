/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:56:56 by mmorente          #+#    #+#             */
/*   Updated: 2024/09/28 19:19:02 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	total_size;

	if (!s1 && !s2)
		return (NULL);
	total_size = ft_strlen(s1) + ft_strlen(s2);
	new_string = (char *)malloc((total_size + 1) * sizeof(char));
	if (!new_string)
		return (NULL);
	ft_memcpy((void *)new_string, s1, ft_strlen(s1));
	ft_memcpy((void *)(new_string + ft_strlen(s1)), s2, ft_strlen(s2));
	new_string[total_size] = '\0';
	return (new_string);
}
