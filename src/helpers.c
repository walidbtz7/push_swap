/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:40:50 by wboutzou          #+#    #+#             */
/*   Updated: 2022/07/03 23:51:57 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack(char **argv, int argc, t_node **a)
{
	int		i;
	t_node	*tmp;

	i = argc - 1;
	tmp = NULL;
	while (i > 0)
	{
		create_new_node(ft_cosatoi(argv[i]), &tmp);
		insert_at_head(a, tmp);
		i--;
	}
}

void	*ft_memcpy(void *dst, const	void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *) dst;
	s = (char *) src;
	if (!d && !s)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
