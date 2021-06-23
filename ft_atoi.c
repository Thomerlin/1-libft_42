/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri </var/mail/tyago-ri>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:41:13 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/06/16 13:42:04 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	int	c;
	int	sing;
	int	res;

	c = 0;
	sing = 1;
	res = 0;
	while (ptr[c] == ' ' || ptr[c] == '\n' || ptr[c] == '\v'
		|| ptr[c] == '\t' || ptr[c] == '\f' || ptr[c] == '\r')
		c++;
	if (ptr[c] == '-')
		sing = -1;
	if (ptr[c] == '-' || ptr[c] == '+')
		c++;
	while (ptr[c] >= '0' && ptr[c] <= '9')
		res = res * 10 + ptr[c++] - '0';
	return (res * sing);
}
