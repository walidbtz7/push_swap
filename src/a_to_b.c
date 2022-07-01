/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:40:50 by wboutzou          #+#    #+#             */
/*   Updated: 2022/07/01 22:28:20 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	expansion(t_sort *push)
{
	push->end += push->shunck;
	if (push->end > push->size)
		push->end = push->size - 1;
	push->start -= push->shunck;
	if (push->start < 0)
		push->start = 0;
}

void	init(t_sort *push)
{
	push->shunck = push->size / (((push->size <= 150) * 8) \
	+ ((push->size > 150) * 18));
	push->mid = (push->size) / 2;
	push->end = push->mid;
	push->lastsize = 0;
	push->start = push->mid;
	push->i = 1;
}

void	ft_a_to_b(t_node **a, t_node **b, t_sort *push)
{
	init(push);
	while (ft_lstsize(*a) > 1)
	{
		expansion(push);
		while (push->i <= (push->end - push->start + 1))
		{
			if ((*a)->value >= push->sorted[push->start] \
			&& (*a)->value < push->sorted[push->end])
			{

				pb(a, b);
				push->i++;
				if ((*b)->value < push->sorted[push->mid])
					rb(b);
			}
			else
				if(ft_lstsize(*a) != 0)
					ra(a);
		}
	}
}