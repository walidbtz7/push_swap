/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 22:25:51 by wboutzou          #+#    #+#             */
/*   Updated: 2022/07/01 06:49:30 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack(char **argv, int argc, t_node **a)
{
	int		i;
	t_node	*tmp;

	i = argc - 1;
	tmp = NULL;
	while (i > 0)
	{
		create_new_node(ft_cosatoi(argv[i]), &tmp);
		insert_at_head(a, tmp);
		i--;
	}
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	t_sort	push;

	if (argc > 2)
	{
		a = NULL;
		b = NULL;
		if (checkarg(argv, argc))
		{
			create_stack(argv, argc, &a);
			if (!nsorted(&push, &a))
				return (0);
			sort(&a, &b, &push);
		}
		else
			ft_printf("Error\n");
	}
	return (0);
}
