/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:14:09 by mmorente          #+#    #+#             */
/*   Updated: 2024/09/28 11:35:20 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*buff;

	buff = (unsigned char *)s;
	while (n > 0)
	{
		*buff = '\0';
		buff++;
		n--;
	}
}
