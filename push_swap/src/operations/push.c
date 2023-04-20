/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:00:31 by maricard          #+#    #+#             */
/*   Updated: 2023/04/20 09:35:37 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_root *root)
{
	root->i = root->a;
	if (root->b == 0)
		return ;
	while (root->i - 1 >= 0)
	{
		root->temp = root->stack_a[root->i];
		root->stack_a[root->i] = root->stack_a[root->i - 1];
		root->stack_a[root->i - 1] = root->temp;
		root->i--;
	}
	root->temp = root->stack_b[0];
	root->stack_b[0] = root->stack_a[0];
	root->stack_a[0] = root->temp;
	root->a++;
	root->b--;
	root->i = 0;
	while (root->i < root->b)
	{
		root->temp = root->stack_b[root->i];
		root->stack_b[root->i] = root->stack_b[root->i + 1];
		root->stack_b[root->i + 1] = root->temp;
		root->i++;
	}
	ft_printf("pa\n");
	root->moves++;
}

void	pb(t_root *root)
{
	root->i = root->b;
	if (root->a == 0)
		return ;
	while (root->i - 1 >= 0)
	{
		root->temp = root->stack_b[root->i];
		root->stack_b[root->i] = root->stack_b[root->i - 1];
		root->stack_b[root->i - 1] = root->temp;
		root->i--;
	}
	root->temp = root->stack_a[0];
	root->stack_a[0] = root->stack_b[0];
	root->stack_b[0] = root->temp;
	root->b++;
	root->a--;
	root->i = 0;
	while (root->i < root->a)
	{
		root->temp = root->stack_a[root->i];
		root->stack_a[root->i] = root->stack_a[root->i + 1];
		root->stack_a[root->i + 1] = root->temp;
		root->i++;
	}
	ft_printf("pb\n");
	root->moves++;
}
