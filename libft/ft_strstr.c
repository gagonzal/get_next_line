/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 19:44:12 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/21 23:50:57 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;

	i = 0;
	if (s2[i] == '\0')
		return (char*)(s1);
	while (s1[i])
	{
		if ((ft_strncmp(s1 + i, s2, ft_strlen(s2))) == 0)
			return (char*)(s1 + i);
		i++;
	}
	return (NULL);
}
