/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:23:49 by mmorente          #+#    #+#             */
/*   Updated: 2024/10/05 18:00:58 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*result_string;

	if (s == NULL || f == NULL)
		return (NULL);
	result_string = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	ft_memcpy(result_string, s, ft_strlen(s));
	if (!result_string)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		result_string[i] = (*f)(i, s[i]);
		i++;
	}
	result_string[i] = '\0';
	return (result_string);
}
