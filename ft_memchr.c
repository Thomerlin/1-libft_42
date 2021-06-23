/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri </var/mail/tyago-ri>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:48:38 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/06/16 13:48:39 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t length)
{
	unsigned const char	*buffer;
	size_t				i;

	buffer = (unsigned const char *)buf;
	i = 0;
	while (i < length)
	{
		if (*buffer != (unsigned char)ch)
			buffer++;
		else
			return ((void *)buffer);
		i++;
	}
	return (NULL);
}
