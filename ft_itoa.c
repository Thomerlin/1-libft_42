/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri </var/mail/tyago-ri>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:46:00 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/06/16 13:46:02 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*result;
	long int	nb;
	int			is_neg;
	size_t		len;

	is_neg = n < 0;
	nb = n;
	if (is_neg)
		nb = -nb;
	len = 1;
	while (n / 10 != 0 && len++)
		n = n / 10;
	result = malloc(sizeof(char) * (len + 1 + is_neg));
	if (!result)
		return (NULL);
	result[len + is_neg] = '\0';
	while (len--)
	{
		result[len + is_neg] = nb % 10 + '0';
		nb /= 10;
	}
	if (is_neg)
		result[0] = '-';
	return (result);
}
