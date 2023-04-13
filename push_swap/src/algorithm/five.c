/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:43:43 by maricard          #+#    #+#             */
/*   Updated: 2023/04/13 14:17:06 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_a(t_root *root)
{
	int	i;

	i = 0;
	if (root->stack_b[0] >root->stack_b[1])
		sb(root, 1);
	pa(root);
	pa(root);
	ra(root, 1);
}

void	push_to_b(t_root *root)
{
	int	i;

	i = 0;
	while (i <= 4)
	{
		if (root->stack_a[0] == root->nmin
				|| root->stack_a[0] == root->nmax)
			pb(root);
		else
		{
			if (root->stack_a[1] == root->nmin
				|| root->stack_a[1] == root->nmax
					|| root->stack_a[2] == root->nmin
						|| root->stack_a[2] == root->nmax)
				ra(root, 1);
			else
				rra(root, 1);
		}
		i++;
	}
}

void	five(t_root *root)
{
	find_min_a(root);
	find_max_a(root);
	ft_printf("N min->%d |N max->%d\n", root->nmin, root->nmax);
	push_to_b(root);
	three(root);
	push_to_a(root);
}