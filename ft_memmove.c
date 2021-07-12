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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;
	int		i;

	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	if (src == dst)
		return (dst);
	if (source < dest)
	{
		while (len--)
			*(dest + len) = *(source + len);
		return (dst);
	}
	while (len--)
		*dest++ = *source++;
	return (dst);
}
