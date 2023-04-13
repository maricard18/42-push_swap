/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:01:11 by maricard          #+#    #+#             */
/*   Updated: 2023/04/13 18:33:21 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_root *root, bool flag)
{
	if (root->a < 2)
		return ;
	root->temp = root->stack_a[0];
	root->stack_a[0] = root->stack_a[1];
	root->stack_a[1] = root->temp;
	if (flag == 1)
		ft_printf("sa\n");
	root->moves++;
}

void	sb(t_root *root, bool flag)
{
	if (root->b < 2)
		return ;
	root->temp = root->stack_b[0];
	root->stack_b[0] = root->stack_b[1];
	root->stack_b[1] = root->temp;
	if (flag == 1)
		ft_printf("sb\n");
	root->moves++;
}

void	ss(t_root *root)
{
	sa(root, 0);
	sb(root, 0);
	ft_printf("ss\n");
}
