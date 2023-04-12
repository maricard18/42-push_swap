/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:43:43 by maricard          #+#    #+#             */
/*   Updated: 2023/04/12 21:12:17 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_max_to_b(t_root *root)
{
	if (root->max == 0)
		pb(root);
	else if (root->max == 1)
	{
		sa(root, 1);
		pb(root);
	}
	else if (root->max == 2)
	{
		ra(root, 1);
		ra(root, 1);
		pb(root);
	}
	else if (root->max == 3)
	{
		rra(root, 1);
		rra(root, 1);
		pb(root);
	}
	else if (root->max == 4)
	{
		rra(root, 1);
		pb(root);	
	}
}

void	push_min_to_b(t_root *root)
{
	if (root->min == 0)
		pb(root);
	else if (root->min == 1)
	{
		sa(root, 1);
		pb(root);
	}
	else if (root->min == 2)
	{
		ra(root, 1);
		ra(root, 1);
		pb(root);
	}
	else if (root->min == 3)
	{
		rra(root, 1);
		rra(root, 1);
		pb(root);
	}
	else if (root->min == 4)
	{
		rra(root, 1);
		pb(root);	
	}
}

void	find_min(t_root *root)
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
}

void	find_min2(t_root *root)
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
}

void	five(t_root *root)
{
	find_min(root);
	find_min2(root);
	ft_printf("min->%d | max->%d\n", root->min, root->max);
	push_min_to_b(root);
	push_max_to_b(root);
	three(root);
}