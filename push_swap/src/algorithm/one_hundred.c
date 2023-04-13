/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_hundred.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:43:34 by maricard          #+#    #+#             */
/*   Updated: 2023/04/13 18:42:35 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_all_to_a(t_root *root)
{
	int	i;

	i = 0;
	while (i <= root->size)
	{
		pa(root);
		i++;
	}
}

void	push_min_to_b(t_root *root)
{
	if (root->stack_a[0] == root->nmin)
	{
		pb(root);
		return ;
	}
	else
	{
		if (root->min <= (root->a / 2))
			ra(root, 1);
		else
			rra(root, 1); 
	}
}

void	one_hundred(t_root *root)
{
	while (root->a != 0)
	{
		find_min_a(root);
		push_min_to_b(root);
	}
	while (root->b != 0)
		push_all_to_a(root);
}
