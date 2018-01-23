/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:02:58 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/28 19:19:37 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = NULL;
	if (size > 0)
	{
		if (!(ptr = (void*)malloc(sizeof(void) * size)))
			return (NULL);
		ft_memset(ptr, 0, size);
	}
	return (ptr);
}
