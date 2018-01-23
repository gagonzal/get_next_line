/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 22:54:21 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/28 17:41:15 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;
	unsigned char		*dest;

	str = src;
	dest = dst;
	i = 0;
	while (n--)
	{
		dest[i] = str[i];
		if ((unsigned char)c == str[i])
		{
			return (void*)(dest + i + 1);
		}
		i++;
	}
	return (NULL);
}
