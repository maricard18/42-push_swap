/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:00:31 by maricard          #+#    #+#             */
/*   Updated: 2023/04/13 18:32:44 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_root *root)
{
	int	i;

	i = root->a;
	if (root->b == 0)
		return ;
	while (i - 1 >= 0)
	{
		root->temp = root->stack_a[i];
		root->stack_a[i] = root->stack_a[i - 1];
		root->stack_a[i - 1] = root->temp;
		i--;
	}
	root->temp = root->stack_b[0];
	root->stack_b[0] = root->stack_a[0];
	root->stack_a[0] = root->temp;
	root->a++;
	root->b--;
	i = -1;
	while (i++ <= root->b - 1)
	{
		root->temp = root->stack_b[i];
		root->stack_b[i] = root->stack_b[i + 1];
		root->stack_b[i + 1] = root->temp;
	}
	ft_printf("pa\n");
	root->moves++;
}

void	pb(t_root *root)
{
	int	i;

	i = root->b;
	if (root->a == 0)
		return ;
	while (i - 1 >= 0)
	{
		root->temp = root->stack_b[i];
		root->stack_b[i] = root->stack_b[i - 1];
		root->stack_b[i - 1] = root->temp;
		i--;
	}
	root->temp = root->stack_a[0];
	root->stack_a[0] = root->stack_b[0];
	root->stack_b[0] = root->temp;
	root->b++;
	root->a--;
	i = -1;
	while (i++ <= root->a - 1)
	{
		root->temp = root->stack_a[i];
		root->stack_a[i] = root->stack_a[i + 1];
		root->stack_a[i + 1] = root->temp;
	}
	ft_printf("pb\n");
	root->moves++;
}
