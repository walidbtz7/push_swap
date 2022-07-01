/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:16:46 by wboutzou          #+#    #+#             */
/*   Updated: 2022/07/01 21:59:58 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node *head)
{
	t_node	*second;
	int		tmp;
	if (head == NULL)
		return ;
	tmp = head->value;
	second = head->next;
	head->value = second->value;
	second->value = tmp;
}

void	sa(t_node **a)
{
	swap(*a);
	printf("sa\n");
}

void	sb(t_node **b)
{
	swap(*b);
	printf("sb\n");
}

void	ss(t_node **a, t_node **b)
{
	swap(*a);
	swap(*b);
	printf("ss\n");
}
