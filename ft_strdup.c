/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri </var/mail/tyago-ri>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:50:50 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/06/16 13:50:51 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*copy;
	int		size;

	size = ft_strlen(src) + 1;
	copy = (char *)malloc(size);
	if (copy != 0)
	{
		ft_strlcpy(copy, src, size);
		return (copy);
	}
	return (NULL);
}
