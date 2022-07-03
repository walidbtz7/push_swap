/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 00:32:10 by wboutzou          #+#    #+#             */
/*   Updated: 2022/07/03 23:22:28 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	readline(char **saver, int *rd, int fd)
{
	char	*buff;

	buff = (char *) malloc(2);
	if (!buff)
		return (0);
	buff[0] = '\0';
	while (*rd > 0 && !ft_strchr(buff, '\n'))
	{
		*rd = read(fd, buff, 1);
		if (*rd < 0)
		{
			free(buff);
			return (0);
		}
		buff[*rd] = '\0';
		if (!ft_strchr(buff, '\n'))
			*saver = ft_strjoin(*saver, buff);
	}
	free(buff);
	return (1);
}

char	*get_next_line(int fd)
{
	char	*saver;
	int		rd;
	int		check;

	if (fd < 0)
		return (0);
	rd = 1;
	saver = NULL;
	check = readline(&saver, &rd, fd);
	if (check == 0)
		return (NULL);
	if (rd == 0 && saver[0] == '\0')
	{
		free(saver);
		saver = NULL;
		return (0);
	}
	return (saver);
}
