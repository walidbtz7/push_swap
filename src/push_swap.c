/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 22:25:51 by wboutzou          #+#    #+#             */
/*   Updated: 2022/07/03 23:30:15 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
