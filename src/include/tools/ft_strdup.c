/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:06:28 by wboutzou          #+#    #+#             */
/*   Updated: 2022/06/26 20:52:05 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"

char	*ft_strdup(const	char *s1)
{
	size_t	i;
	char	*p;

	i = ft_strlen(s1) + 1;
	p = (char *) malloc(i);
	if (p == NULL)
		return (NULL);
	ft_memcpy(p, s1, i);
	return (p);
}
