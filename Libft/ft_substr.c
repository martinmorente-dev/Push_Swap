/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:11:30 by mmorente          #+#    #+#             */
/*   Updated: 2024/10/10 18:54:34 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*subs;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(start + s);
	subs = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	while (i < len && s[start] != '\0')
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i++] = '\0';
	return (subs);
}
