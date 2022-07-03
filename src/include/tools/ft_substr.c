/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:07:57 by wboutzou          #+#    #+#             */
/*   Updated: 2022/06/26 22:42:07 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"

char	*ft_substr(char	const *s, unsigned	int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s) + 1)
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	p = (char *) malloc(len +1);
	if (!p)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (s[i] != '\0' && j < len)
		{
			p[j++] = s[i++];
		}
		p[j] = '\0';
	}
	return (p);
}
