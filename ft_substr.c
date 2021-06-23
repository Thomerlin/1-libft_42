/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri </var/mail/tyago-ri>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:53:06 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/06/16 13:53:08 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	size;
	size_t	s_size;
	size_t	str_start;

	if (!s)
		return (NULL);
	str_start = start;
	s_size = ft_strlen(s);
	if (start > s_size)
	{
		size = 1;
		str_start = 0;
	}
	else if (start + len > s_size)
		size = s_size - start + 1;
	else
		size = len + 1;
	new_str = malloc(size);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s + str_start, size);
	return (new_str);
}
