/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:15:12 by mmorente          #+#    #+#             */
/*   Updated: 2024/10/10 18:38:44 by martin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	coincidence(const char	*set, char s1);
static char	*final_string(const char *s1, size_t start, size_t end);

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return ((char *)s1);
	while (coincidence(set, s1[i]))
		i++;
	while (coincidence(set, s1[j - 1]))
		j--;
	return (final_string(s1, i, j - i));
}

static char	*final_string(const char *s1, size_t start, size_t end)
{
	size_t	i;
	char	*str;

	if (end <= 0 || start >= ft_strlen(s1))
		return ((char *)s1);
	str = (char *)malloc(end * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < end)
	{
		str[i] = s1[start + i];
		i++;
	}
	return (str);
}

static int	coincidence(const char	*set, char s1)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}
