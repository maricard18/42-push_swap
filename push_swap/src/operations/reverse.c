/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:00:44 by maricard          #+#    #+#             */
/*   Updated: 2023/04/08 17:03:21 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_root *root, bool flag)
{
	int	i;

	i = root->a - 1;
	if (root->a < 2)
		return ;
	root->temp = root->stack_a[0];
	root->stack_a[0] = root->stack_a[i];
	root->stack_a[i] = root->temp;
	while (i - 1 > 0)
	{
		root->temp = root->stack_a[i];
		root->stack_a[i] = root->stack_a[i - 1];
		root->stack_a[i - 1] = root->temp;
		i--;
	}
	if (flag == 1)
		ft_printf("rra\n");
}

void	rrb(t_root *root, bool flag)
{
	int	i;

	i = root->b - 1;
	if (root->b < 2)
		return ;
	root->temp = root->stack_b[0];
	root->stack_b[0] = root->stack_b[i];
	root->stack_b[i] = root->temp;
	while (i - 1 > 0)
	{	
		root->temp = root->stack_b[i];
		root->stack_b[i] = root->stack_b[i - 1];
		root->stack_b[i - 1] = root->temp;
		i--;
	}
	if (flag == 1)
		ft_printf("rrb\n");
}

void	rrr(t_root *root)
{
	rra(root, 0);
	rrb(root, 0);
	ft_printf("rrr\n");
}
