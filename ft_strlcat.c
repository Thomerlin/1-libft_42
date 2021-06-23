/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri </var/mail/tyago-ri>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:51:15 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/06/16 13:51:17 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t 	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	offset;
	size_t	i;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	offset = dlen;
	i = 0;
	if (size <= dlen)
		return (slen + size);
	while (src[i] && offset != size - 1)
	{
		dest[offset] = src[i];
		offset++;
		i++;
	}
	dest[offset] = '\0';
	return (dlen + slen);
}
