/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:43:43 by maricard          #+#    #+#             */
/*   Updated: 2023/04/12 12:42:07 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_extremes(t_root *root)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (root->stack_a[a])
	{
		if (root->stack_a[i] < root->stack_a[a])
			root->min = i;
		else
			i++;
		a++;
	}	
}

// find extremes not working !!!

void	five(t_root *root)
{
	find_extremes(root);
	ft_printf("%d\n", root->min);
	pb(root);
	pb(root);
	three(root);
	
}