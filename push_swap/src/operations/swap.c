/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:01:11 by maricard          #+#    #+#             */
/*   Updated: 2023/04/08 00:18:33 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_root *root)
{
	if (root->size < 2)
		return ;
	root->temp = root->stack_a[0];
	root->stack_a[0] = root->stack_a[1];
	root->stack_a[1] = root->temp;
}

void	sb(t_root *root)
{
	if (root->size < 2)
		return ;
	root->temp = root->stack_b[0];
	root->stack_b[0] = root->stack_b[1];
	root->stack_b[1] = root->temp;
}

void	ss(t_root *root)
{
	sa(root);
	sb(root);
}