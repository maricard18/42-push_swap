/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_extremes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:15:37 by maricard          #+#    #+#             */
/*   Updated: 2023/04/13 14:16:12 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_max_a(t_root *root)
{
	int	i;
	int	a;

	i = 0;
	a = i + 1;
	while (root->stack_a[a])
	{
		if (root->stack_a[i] > root->stack_a[a])
		{
			if (root->stack_a[i] >= root->stack_a[root->max])
				root->max = i;
		}
		else
		{
			if (root->stack_a[a] >= root->stack_a[root->max])
				root->max = a;
		}
		a++;
	}
	root->nmax = root->stack_a[root->max];
}

void	find_min_a(t_root *root)
{
	int	i;
	int	a;

	i = 0;
	a = i + 1;
	while (root->stack_a[a])
	{
		if (root->stack_a[i] < root->stack_a[a])
		{
			if (root->stack_a[i] <= root->stack_a[root->min])
				root->min = i;
		}
		else
		{
			if (root->stack_a[a] <= root->stack_a[root->min])
				root->min = a;
		}
		a++;
	}
	root->nmin = root->stack_a[root->min];
}
