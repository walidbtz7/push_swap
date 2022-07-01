/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:40:41 by wboutzou          #+#    #+#             */
/*   Updated: 2022/07/01 18:09:50 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_node **a, t_node **b, t_sort *push)
{
	ft_a_to_b(a, b, push);
	ft_b_to_a(a, b, push);
}

void	sort(t_node **a, t_node **b, t_sort *push)
{
	if (push->size < 15)
		ft_sort_fifteen(a, b, push);
	else
		ft_sort(a, b, push);
}