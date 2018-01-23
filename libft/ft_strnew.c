/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:42:50 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/20 15:53:12 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *strnew;

	if ((strnew = malloc(sizeof(char) * size + 1)) == NULL)
		return (NULL);
	ft_bzero(strnew, size + 1);
	return (strnew);
}
