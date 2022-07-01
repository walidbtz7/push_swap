/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:16:46 by wboutzou          #+#    #+#             */
/*   Updated: 2022/06/29 22:47:16 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	putfirst(t_node **src, t_node **dst)
{
	t_node	*tmp;

	if (*src == NULL)
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dst;
	*dst = tmp;
}

void	pa(t_node **a, t_node **b)
{
	putfirst(a, b);
	printf("pa\n");
}

void	pb(t_node **a, t_node **b)
{
	putfirst(a, b);
	printf("pb\n");
}
