/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:43:34 by maricard          #+#    #+#             */
/*   Updated: 2023/04/19 21:27:31 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_stack_b_bits(t_root *root, int i)
{
	int	a;
	int k;

	a = 0;
	k = root->b;
	if (i == root->max_bits)
		return ;
	while (a < k)
	{
		if (((root->stack_b[0] >> i) & 1) == 0)
			rb(root, 1);
		else
			pa(root);
		a++;
	}
}

void	stack_b(t_root *root)
{
	int	i;
	int	k;

	i = 0;
	k = root->b;
	while (i < k)
	{
		pa(root);
		i++;
	}
}

void	check_stack_a_bits(t_root *root)
{
	int	i;
	int	a;
	int k;

	i = 0;
	k = root->a;
	while (i <= root->max_bits)
	{
		a = 0;
		while (a < k)
		{
			if (((root->stack_a[0] >> i) & 1) == 0)
				pb(root);
			else
				ra(root, 1);
			a++;
		}
		stack_b(root);
		i++;
	}
}

void	radix(t_root *root)
{
	int	i;

	i = 7;
	indexing_array(root);
	tests(root);
	while (i >= 0)
	{
		if (((root->stack_a[root->max] >> i) & 1) ==  0)
			root->max_bits++;
		else
		{
			root->max_bits = i + 1;
			i = 0;
		}
		i--;
	}
	ft_printf("%d\n", root->max_bits);
	check_stack_a_bits(root);
}
