/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:03:04 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/28 19:33:04 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	if (s2[i] == '\0')
		return (char*)(s1);
	while (s1[i] && i < len)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			k = i;
			while (s1[i] && s2[j] && s1[i] == s2[j] && i++ < len)
				j++;
			if ((j && s2[j] == '\0') || (i == len - 1 && s2[j] == s1[i]))
				return (char*)(s1 + k);
			if (i == len - 1)
				return (NULL);
			i = k;
		}
		i++;
	}
	return (NULL);
}
