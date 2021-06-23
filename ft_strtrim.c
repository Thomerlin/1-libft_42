/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri </var/mail/tyago-ri>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:52:54 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/06/16 13:52:56 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_start(char const *str, char const *set)
{
	size_t	start;

	start = 0;
	while (str[start] && ft_strchr(set, str[start]))
		start++;
	return (start);
}

static size_t	find_end(char const *str, char const *set)
{
	size_t	end;

	end = ft_strlen(str);
	while (end && ft_strchr(set, str[end]))
		end--;
	return (end + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	size_t			end;
	char			*result;

	start = find_start(s1, set);
	end = find_end(&s1[start], set);
	result = ft_substr(s1, start, end);
	return (result);
}
