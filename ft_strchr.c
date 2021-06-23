/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri </var/mail/tyago-ri>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:50:34 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/06/16 13:50:35 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	conv_c;

	conv_c = (unsigned char)c;
	while (*s)
	{
		if (*s == conv_c)
			return ((char *)s);
		s++;
	}
	if (conv_c == *s)
		return ((char *)s);
	return (NULL);
}
