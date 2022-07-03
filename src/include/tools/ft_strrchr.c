/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:07:43 by wboutzou          #+#    #+#             */
/*   Updated: 2022/06/26 18:45:47 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"

char	*ft_strrchr(const	char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (s[i] != (char)c)
	{
		if (s[i] != c && i == 0)
		{
			return (NULL);
		}
		i--;
	}
	return ((char *)(s + i));
}
