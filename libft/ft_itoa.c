/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:43:29 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/28 18:09:56 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_negitoa(char *str, int c, int len)
{
	long min;

	min = c;
	min = min * -1;
	while (len-- >= 1)
	{
		str[len] = min % 10 + 48;
		min = min / 10;
	}
	str[0] = '-';
	return (str);
}

static int	ft_sizenb(int c)
{
	int ret;

	ret = 0;
	if (c == -2147483648)
		ret = 11;
	if (c == 0)
		ret = 1;
	if (c < 0 && c != -2147483648)
	{
		c = c * -1;
		ret++;
	}
	while (c > 0)
	{
		ret++;
		c = c / 10;
	}
	return (ret);
}

char		*ft_itoa(int c)
{
	char	*str;
	int		len;

	len = ft_sizenb(c);
	if ((str = malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	str[len] = '\0';
	if (c >= 0)
	{
		while (len-- > 0)
		{
			str[len] = c % 10 + 48;
			c = c / 10;
		}
	}
	if (c < 0)
		str = ft_negitoa(str, c, len);
	return (str);
}
