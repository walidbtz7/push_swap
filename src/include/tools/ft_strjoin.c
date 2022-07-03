/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:42:47 by wboutzou          #+#    #+#             */
/*   Updated: 2022/06/26 22:41:13 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"

char	*ft_strjoin(char	*s1, char	*s2)
{
	int		i;
	int		j;
	char	*p;

	j = 0;
	if (!s1 && !s2)
		return (0);
	if (!s1)
		s1 = ft_strldup("", 0);
	i = ft_strlen(s1) + ft_strlen(s2);
	p = (char *) malloc(i + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (j < (int) ft_strlen(s1))
		p[j++] = s1[i++];
	i = 0;
	while (i < (int) ft_strlen(s2))
		p[j++] = s2[i++];
	p[j] = '\0';
	free(s1);
	return (p);
}

char	*ft_strldup(const char *s1, int len)
{
	char	*p;
	int		i;

	if (!s1)
		return (0);
	p = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!p)
		return (NULL);
	while (s1[i] && i < len)
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
