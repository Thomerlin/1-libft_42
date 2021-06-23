/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri </var/mail/tyago-ri>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:48:57 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/06/16 13:48:58 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char		*dst;
	unsigned const char	*source;

	dst = (unsigned char *)dest;
	source = (unsigned const char *)src;
	while ((dst != 0 || source != 0) && num--)
		dst[num] = source[num];
	return (dest);
}
