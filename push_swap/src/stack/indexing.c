/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:37:36 by maricard          #+#    #+#             */
/*   Updated: 2023/04/20 10:11:35 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	convert_array(t_root *root)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (i < root->size)
	{
		a = 0;
		while (a < root->size)
		{
			if (root->stack_a[i] == root->t[a])
			{
				root->stack_a[i] = a;
				break ;
			}
			a++;
		}
		i++;
	}
	free(root->t);
}

void	indexing_array(t_root *root)
{
	int	i;

	i = 0;
	root->t = ft_calloc(root->size, sizeof(int));
	if (!root->t)
		ft_error(root);
	while (i < root->size)
	{
		root->t[i] = root->stack_a[i];
		i++;
	}
	i = 0;
	while (i < root->size - 1)
	{
		if (root->t[i] > root->t[i + 1])
		{
			root->k = root->t[i];
			root->t[i] = root->t[i + 1];
			root->t[i + 1] = root->k;
			i = 0;
		}
		else
			i++;
	}
	convert_array(root);
}
