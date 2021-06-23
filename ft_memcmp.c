/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri </var/mail/tyago-ri>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:48:48 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/06/16 13:48:48 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t length)
{
	unsigned const char	*src1;
	unsigned const char	*src2;
	size_t				i;

	src1 = (unsigned const char *)s1;
	src2 = (unsigned const char *)s2;
	i = 0;
	while (i < length)
	{
		if (src1[i] != src2[i])
			return (src1[i] - src2[i]);
		i++;
	}
	return (0);
}
