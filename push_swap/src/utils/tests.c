/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 10:32:23 by maricard          #+#    #+#             */
/*   Updated: 2023/04/13 18:49:15 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tests(t_root *root)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	a = root->a;
	b = root->b;
	ft_printf("------------\n  A  |  B   \n------------\n");
	while (i < root->size)
	{
		if (a > 0)
			ft_printf("  %d  |", root->stack_a[i]);
		else
			ft_printf("     |");
		if (b > 0)
			ft_printf("  %d  \n", root->stack_b[i]);
		else
			ft_printf("     \n");
		i++;
	}
	ft_printf("------------\n");
	ft_printf("Moves: %d\n", root->moves);
}
