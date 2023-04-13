/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:03:13 by maricard          #+#    #+#             */
/*   Updated: 2023/04/13 18:48:31 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_root *root)
{
	int	i;

	i = 0;
	while (root->stack_a[i + 1])
	{
		if (root->stack_a[i] > root->stack_a[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	start_sorting(t_root *root, int argc)
{
	if (is_sorted(root) == 0)
		return ;
	else if (argc == 3)
		two(root);
	else if (argc == 4)
		three(root);
	else if (argc >= 5 && argc <= 6)
		five (root);
	else if (argc >= 7 && argc <= 101)
		one_hundred(root);
	// else if (argc >= 102)
	// 	five_hundred(root);
}
