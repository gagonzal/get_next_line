/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:38:19 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/28 17:42:16 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*s1;
	const unsigned char	*s2;

	s1 = str1;
	s2 = str2;
	if (!n)
		return (0);
	while (n--)
	{
		if (*s1 != *s2 || !n)
			break ;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
