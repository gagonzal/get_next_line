/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 22:18:12 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/28 19:22:28 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*s2;
	const unsigned char	*s1;

	s2 = dst;
	s1 = src;
	i = 0;
	while (n--)
	{
		s2[i] = s1[i];
		i++;
	}
	return (void*)(s2);
}
