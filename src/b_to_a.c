/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:40:50 by wboutzou          #+#    #+#             */
/*   Updated: 2022/07/01 18:09:14 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	existsinttack(t_node **stack, int value)
{
	t_node	*tmp;

	tmp = *stack;
	while (tmp)
	{
		if (tmp->value == value)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int	gettail(t_node **a)
{
	t_node	*tmp;

	tmp = *a;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp->value);
}

int	posinb(t_node **b, int value)
{
	int		mid;
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = *b;
	mid = ft_lstsize(*b) / 2;
	while (tmp)
	{
		if (tmp->value == value)
		{
			if (i >= mid)
				return (1);
			else
				return (0);
		}
		tmp = tmp->next;
		i++;
	}
	return (1);
}

void	magic(t_node **a, t_node **b, t_sort *push)
{
	if ((*b)->value == push->sorted[push->max])
	{
		pa(b, a);
		push->i++;
	}
	else
	{
		if (push->down == 0 || ((*b)->value > gettail(a)))
		{
			pa(b, a);
			ra(a);
			push->down++;
		}
		else
		{
			if (!posinb(b, push->sorted[push->max]))
				rb(b);
			else
				rrb(b);
		}
	}
}

void	ft_b_to_a(t_node **a, t_node **b, t_sort *push)
{
	push->i = 1;
	push->down = 0;
	push->max = 0;
	while (ft_lstsize(*b) > 0)
	{
		push->max = push->size - push->i;
		if (existsinttack(b, push->sorted[push->max]))
			magic(a, b, push);
		else
		{
			if (push->down > 0)
			{
				rra(a);
				push->down--;
				push->i++;
			}
		}
	}
	while (push->down != 0)
	{
		rra(a);
		push->down--;
	}
}