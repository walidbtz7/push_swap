/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:51:35 by wboutzou          #+#    #+#             */
/*   Updated: 2022/06/26 20:51:48 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"

char	*ft_strchr(char *s, int c)
{
	char	*str;

	str = (char *) s;
	if (!s)
		return (0);
	while (*str != '\0')
	{
		if (*str == (char) c)
			return (str);
		str++;
	}
	return (NULL);
}
