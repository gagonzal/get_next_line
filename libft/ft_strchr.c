/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 19:31:56 by gagonzal          #+#    #+#             */
/*   Updated: 2018/01/18 21:08:42 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return (char*)(s + i);
		i++;
	}
	if (s[i] == '\0' && (unsigned char)c == '\0')
		return (char*)(s + i);
	else
		return (NULL);
}
