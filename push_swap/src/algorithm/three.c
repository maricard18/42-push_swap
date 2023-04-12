/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:34:09 by maricard          #+#    #+#             */
/*   Updated: 2023/04/12 11:43:01 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three(t_root *root)
{
	if (root->stack_a[2] > root->stack_a[0]
			&& root->stack_a[0] > root->stack_a[1])
		sa(root, 1);
	if (root->stack_a[0] > root->stack_a[2]
			&& root->stack_a[2] > root->stack_a[1])
		ra(root, 1);
	if (root->stack_a[1] > root->stack_a[0]
			&& root->stack_a[0] > root->stack_a[2])
		rra(root, 1);
	if (root->stack_a[0] > root->stack_a[1]
			&& root->stack_a[1] > root->stack_a[2])
	{	
		sa(root, 1);
		rra(root, 1);
	}	
	if (root->stack_a[1] > root->stack_a[2]
			&& root->stack_a[2] > root->stack_a[0])
	{
		sa(root, 1);
		ra(root, 1);			
	}
}