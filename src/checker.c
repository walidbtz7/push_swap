/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 22:32:09 by wboutzou          #+#    #+#             */
/*   Updated: 2022/07/01 03:07:15 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_maxint(int signe, long e)
{
	if (e > INT_MAX && signe == 1)
		return (0);
	if (signe == -1)
	{
		if ((e * signe) < INT_MIN)
			return (0);
	}
	return (1);
}

int	ft_cosatoi(const char *nptr)
{
	long	e;
	int		i;
	int		signe;

	e = 0;
	signe = 1;
	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == 45 || nptr[i] == 43)
	{
		if (nptr[i] == 45)
			signe = -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
		e = (e * 10) + (nptr[i++] - 48);
	if (!ft_maxint(signe, e))
	{
		ft_printf("Error\n");
		exit(1);
	}
	return (e * signe);
}

int	is_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	checkarg(char **argv, int argc)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = i - 1;
		if (!is_number(argv[i]))
			return (0);  
		ft_cosatoi(argv[i]);
		while (j >= 1)
		{
			if (!ft_strcmp(argv[i], argv[j]))
				return (0);
			j--;
		}
		i++;
	}
	return (1);
}

int	nsorted(t_sort	*push, t_node **a)
{
	push->size = ft_lstsize(*a);
	push->sorted = (int *)malloc(push->size * sizeof(int));
	toarray(*a, push);
	ft_memcpy(push->sorted, push->tab, push->size * sizeof(int));
	bulle(push->sorted, push->size);
	push->i = 0;
	while (push->sorted[push->i] == push->tab[push->i])
		push->i++;
	if (push->i == push->size)
		return (0);
	return (1);
}
