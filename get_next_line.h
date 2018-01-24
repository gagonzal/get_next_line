/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 19:53:07 by gagonzal          #+#    #+#             */
/*   Updated: 2018/01/24 15:07:48 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE	4000
# include <stdio.h>

int		get_next_line(int fd, char **line);

#endif
