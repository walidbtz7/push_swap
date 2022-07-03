/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:05:52 by wboutzou          #+#    #+#             */
/*   Updated: 2022/07/03 03:48:04 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "include/ft_printf/ft_printf.h"
# include "include/tools/helpers.h"

struct s_node
{
	int				value;
	struct s_node	*next;
};
typedef struct s_node	t_node;

struct s_sort{
	int		size;
	int		*tab;
	int		*sorted;
	int		shunck;
	int		start;
	int		end;
	int		mid;
	int		lastsize;
	int		temp;
	int		down;
	int		max;
	int		i;
	char	*str;
};
typedef struct s_sort	t_sort;

void	create_stack(char **argv, int argc, t_node **a);
void	insert_at_head(t_node **head, t_node *node_to_insert);
void	create_new_node(int value, t_node **tmp);
void	printlist(t_node *head);
void	create_stack(char **argv, int argc, t_node **a);
int		ft_lstsize(t_node *lst);
t_node	*ft_lstnew(int value);
int		checkarg(char **argv, int argc);
int		is_number(char *str);
int		ft_cosatoi(const char *nptr);
void	*ft_memcpy(void *dst, const	void *src, size_t n);
int		ft_strcmp(char	*s1, char	*s2);
void	bulle(int *t, int n);
void	toarray(t_node *a, t_sort *push);
void	sort(t_node **a, t_node **b, t_sort *push);
int		nsorted(t_sort	*push, t_node **a);
void	ft_sort_fifteen(t_node **a, t_node **b, t_sort *push);
void	ft_a_to_b(t_node **a, t_node **b, t_sort *push);
void	ft_b_to_a(t_node **a, t_node **b, t_sort *push);
void	putfirst(t_node **src, t_node **dst);
void	reverse_rotate(t_node **head);
void	rotate(t_node **head);
void	swap(t_node **head);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
char	*get_next_line(int fd);
#endif