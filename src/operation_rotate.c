/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:16:46 by wboutzou          #+#    #+#             */
/*   Updated: 2022/07/01 22:05:05 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_node **head)
{
	t_node	*first;
	t_node	*tmp;

	if (*head == NULL)
		return ;
	first = *head;
	*head = (*head)->next;
	tmp = *head;
	first->next = NULL;
	while (tmp)
	{
		if (tmp->next == NULL)
		{
			tmp->next = first;
			return ;
		}
		else
			tmp = tmp->next;
	}
}

void	ra(t_node **a)
{
	rotate(a);
	printf("ra\n");
}

void	rb(t_node **b)
{
	rotate(b);
	printf("rb\n");
}

void	rr(t_node **a, t_node **b)
{
	rotate(a);
	rotate(b);
	printf("rr\n");
}
