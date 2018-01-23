/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 22:09:38 by gagonzal          #+#    #+#             */
/*   Updated: 2018/01/23 17:36:15 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int		get_line(char **line, char *src, char c)
{
	int size;
	int i;
	char *str;

	size = 0;
	while (src && src[size] && src[size] != c)
		size++;
	str = ft_strnew(size);
	i = 0;
	while (str && src[i] && src[i] !=c)
	{
		str[i] = src[i];
		i++;
	}
	*line = str;
	return (size);
}

static t_list	*get_data(t_list **old_line, int fd)
{
	t_list *tmp;

	tmp = *old_line;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
		{
			return(tmp);
		}
		tmp = tmp->next;
	}
	tmp = ft_lstnew("", fd);
	ft_lstadd(old_line, tmp);
	return (tmp);
}

int		get_next_line(const int fd, char **line)
{
	char buf[BUFF_SIZE + 1];
	static t_list	*old_line = NULL;
	int ret;
	int pos;
	t_list		*curr;
	char		*tmp;

	if (fd < 0 || !line)
		return (-1);
	curr = get_data(&old_line, fd);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		if (ret < 0)
			return -1;
		buf[ret] = '\0';
		tmp = ft_strjoin(curr->content, buf);
		free(curr->content);
		curr->content = tmp;
		if (ft_strchr(buf, '\n'))
			break;
	}
	if (ret < BUFF_SIZE && !ft_strlen(curr->content))
	{
		free(curr->content);
		return (0);
	}
	pos = get_line(line, curr->content, '\n');
	if (pos < (int)ft_strlen(curr->content))
	{
		tmp = ft_strdup(curr->content + (pos + 1));
		free(curr->content);
		curr->content = tmp;
	}
	else
	{
		ft_strclr(curr->content);
	}
	return (1);
}
