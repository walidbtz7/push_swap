/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:40:50 by wboutzou          #+#    #+#             */
/*   Updated: 2022/06/30 21:14:54 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	bulle(int *t, int n)
{
	int	j;
	int	i;
	int	tmp;

	i = 0;
	j = 0;
	tmp = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - 1)
		{
			if (t[j] > t[j + 1])
			{
				tmp = t[j + 1];
				t[j + 1] = t[j];
				t[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	toarray(t_node *a, t_sort *push)
{
	t_node	*tmp;

	push->i = 0;
	push->tab = (int *)malloc(sizeof(int) * push->size);
	if (!push->tab)
		return ;
	tmp = a;
	while (tmp)
	{
		push->tab[push->i] = tmp->value;
		tmp = tmp->next;
		push->i++;
	}
}
