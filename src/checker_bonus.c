/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 23:46:17 by wboutzou          #+#    #+#             */
/*   Updated: 2022/07/03 23:28:21 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortwithrerv(t_node **a, t_node **b, char *str)
{
	if (!ft_strcmp("rra", str))
		reverse_rotate(a);
	if (!ft_strcmp("rrb", str))
		reverse_rotate(b);
}

int	sortewith(t_node **a, t_node **b, char *str)
{	
	if (!ft_strcmp("sa", str) || !ft_strcmp("sb", str) | !ft_strcmp("ss", str))
	{
		if (!ft_strcmp("sa", str))
			swap(a);
		if (!ft_strcmp("sb", str))
			swap(b);
	}
	else if (!ft_strcmp("pa", str))
		putfirst(a, b);
	else if (!ft_strcmp("pb", str))
		putfirst(a, b);
	else if (!ft_strcmp("ra", str) \
	|| !ft_strcmp("rb", str) | !ft_strcmp("rr", str))
	{
		if (!ft_strcmp("ra", str))
			rotate(a);
		if (!ft_strcmp("rb", str))
			rotate(b);
	}
	else if (!ft_strcmp("rra", str) || \
	(!ft_strcmp("rrb", str) || !ft_strcmp("rrr", str)))
		sortwithrerv(a, b, str);
	else
		return (0);
	return (1);
}

void	result(t_sort *push, t_node *a, t_node *b)
{
	if (!nsorted(push, &a) && ft_lstsize(b) == 0)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

void	readoperation(t_sort *push, t_node **a, t_node **b)
{
	push->str = get_next_line(0);
	while (push->str)
	{
		if (!sortewith(a, b, push->str))
		{
			ft_printf("Error\n");
			exit(1);
		}
		push->str = get_next_line(0);
	}
	free(push->str);
	result(push, *a, *b);
}

int	main(int argc, char **argv)
{
	t_sort	push;
	t_node	*a;
	t_node	*b;

	if (argc > 2)
	{
		if (checkarg(argv, argc))
		{
			create_stack(argv, argc, &a);
			nsorted(&push, &a);
			readoperation(&push, &a, &b);
		}
		else
			ft_printf("Error\n");
	}
}
