/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:35:14 by maricard          #+#    #+#             */
/*   Updated: 2023/04/20 11:04:06 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_min_to_b(t_root *root)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if (root->stack_a[0] == root->nmin)
			pb(root);
		else
		{
			if (root->stack_a[1] == root->nmin
				|| root->stack_a[2] == root->nmin)
				ra(root, 1);
			else
				rra(root, 1);
		}
		i++;
	}
}

void	four(t_root *root)
{
	find_min_a(root);
	push_min_to_b(root);
	three(root);
	pa(root);
}
