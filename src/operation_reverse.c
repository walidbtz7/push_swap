/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:16:46 by wboutzou          #+#    #+#             */
/*   Updated: 2022/07/01 21:59:31 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_node **head)
{
	t_node	*tmp;
	t_node	*last;

	if (*head == NULL)
		return ;
	tmp = *head;
	while (tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
	last = tmp->next;
	tmp->next = NULL;
	last->next = *head;
	*head = last;
}

void	rra(t_node **a)
{
	reverse_rotate(a);
	printf("rra\n");
}

void	rrb(t_node **b)
{
	reverse_rotate(b);
	printf("rrb\n");
}

void	rrr(t_node **a, t_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	printf("rrr\n");
}
