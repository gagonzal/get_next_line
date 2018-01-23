/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:39:01 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/20 19:46:00 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long min;

	min = n;
	if (min < 0)
	{
		min = min * -1;
		ft_putchar('-');
	}
	if (min < 10 && min >= 0)
		ft_putchar(min + '0');
	else
	{
		ft_putnbr(min / 10);
		ft_putnbr(min % 10);
	}
}
