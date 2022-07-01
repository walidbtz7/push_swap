/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_fifteen.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:40:41 by wboutzou          #+#    #+#             */
/*   Updated: 2022/07/01 20:34:02 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sarra(t_node **a)
{
	sa(a);
	rra(a);
}

void	sara(t_node **a)
{
	sa(a);
	rra(a);
}

void	ft_sort_three(t_node **a, t_sort *push)
{
	push->size = ft_lstsize(*a);
	if (push->tab[2] > push->tab[1] \
	&& push->tab[2] > push->tab[0])
		sa(a);
	else if (push->tab[0] > push->tab[1] \
	&& push->tab[0] > push->tab[2])
	{
		if (push->tab[1] > push->tab[2])
			sarra(a);
		else
			ra(a);
	}
	else if (push->tab[1] > push->tab[0] \
	&& push->tab[1] > push->tab[2])
	{
		if (push->tab[0] > push->tab[2])
			rra(a);
		else
			sara(a);
	}
}

void	ft_sort_fifteen(t_node **a, t_node **b, t_sort *push)
{
	push->i = 0;
	while (ft_lstsize(*a))
	{
		if ((*a)->value == push->sorted[push->i])
		{
			pb(a, b);
			push->i++;
		}
		else
			ra(a);
	}
	while (ft_lstsize(*b))
		pa(b, a);
}
