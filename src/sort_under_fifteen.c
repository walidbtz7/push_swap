/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_fifteen.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:40:41 by wboutzou          #+#    #+#             */
/*   Updated: 2022/07/02 21:30:04 by wboutzou         ###   ########.fr       */
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
	ra(a);
}

void	hardcode(t_node **a, int *tab)
{
	if (tab[2] > tab[1] \
	&& tab[2] > tab[0])
		sa(a);
	else if (tab[0] > tab[1] \
	&& tab[0] > tab[2])
	{
		if (tab[1] > tab[2])
			sarra(a);
		else
			ra(a);
	}
	else if (tab[1] > tab[0] \
	&& tab[1] > tab[2])
	{
		if (tab[0] > tab[2])
			rra(a);
		else
			sara(a);
	}
}

void	ft_sort_three(t_node **a, t_sort *push)
{
	free(push->sorted);
	free(push->tab);
	if (!nsorted(push, a))
		return ;
	if (push->size > 2)
	{
		hardcode(a, push->tab);
	}
	else
		sa(a);
}

void	ft_sort_fifteen(t_node **a, t_node **b, t_sort *push)
{
	push->i = 0;
	while (ft_lstsize(*a) > 3)
	{
		if ((*a)->value == push->sorted[push->i])
		{
			pb(a, b);
			push->i++;
		}
		else
			ra(a);
	}
	if (ft_lstsize(*a) <= 3)
		ft_sort_three(a, push);
	while (ft_lstsize(*b))
		pa(b, a);
}
