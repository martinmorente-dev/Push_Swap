/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:43:30 by mmorente          #+#    #+#             */
/*   Updated: 2024/10/05 18:25:42 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	len_str(long n);
static char	*save(int len);

char	*ft_itoa(int n)
{
	int		len_mall;
	char	*str;
	int		i;
	long	tmp_i;

	tmp_i = n;
	if (tmp_i < 0)
		tmp_i = -tmp_i;
	len_mall = len_str(n);
	str = save(len_mall);
	if (!str)
		return (NULL);
	str[len_mall] = '\0';
	if (n == 0)
		str[0] = '0';
	i = len_mall - 1;
	while (tmp_i > 0)
	{
		str[i--] = (tmp_i % 10) + '0';
		tmp_i = tmp_i / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

static char	*save(int len)
{
	char	*tmp;

	tmp = (char *)malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	return (tmp);
}

static int	len_str(long num)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		count++;
		num = -num;
	}
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}
