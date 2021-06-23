/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri </var/mail/tyago-ri>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:48:22 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/06/16 13:48:23 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy( void *dest, const void *src, int c, size_t cnt)
{
	unsigned char		*dst;
	unsigned const char	*source;
	size_t				i;

	dst = (unsigned char *)dest;
	source = (unsigned char *)src;
	i = 0;
	while (i < cnt)
	{
		dst[i] = source[i];
		if (source[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
