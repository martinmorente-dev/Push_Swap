/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:08:11 by mmorente          #+#    #+#             */
/*   Updated: 2024/10/05 12:38:23 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	len_word(char const *s, char c, int i);
static void	ft_free(char **str, int j);
static	int	count(char const *s, char c);

static int	len_word(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static int	count(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (j);
}

static void	ft_free(char **str, int j)
{
	while (j-- > 0)
		free(str[j]);
	free(str);
}

char	**ft_split(char const *s, int c)
{
	char	**str;
	int		i;
	int		j;
	int		mal;
	int		len;

	mal = count(s, c);
	i = 0;
	str = (char **)malloc((mal + 1) * sizeof(char *));
	j = 0;
	if (!str)
		return (NULL);
	while (j < mal)
	{
		while (s[i] == c)
			i++;
		len = len_word(s, c, i);
		str[j] = ft_substr(s, i, len);
		if (!str[j])
			return (ft_free(str, j), NULL);
		i += len;
		j++;
	}
	str[j] = '\0';
	return (str);
}
