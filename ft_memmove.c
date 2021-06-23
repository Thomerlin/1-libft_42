/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri </var/mail/tyago-ri>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:49:06 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/06/16 13:49:07 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	unsigned char		*dst;
	unsigned const char	*source;
	size_t				i;

	dst = (unsigned char *)dest;
	source = (unsigned const char *)src;
	i = 0;
	if (!source && !dst)
		return (NULL);
	if (source < dst)
		while ((int)(--length) >= 0)
			dst[length] = source[length];
	else
	{
		while (i < length)
		{
			dst[i] = source[i];
			i++;
		}
	}
	return (dest);
}
