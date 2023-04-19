/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:37:36 by maricard          #+#    #+#             */
/*   Updated: 2023/04/19 11:57:16 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	convert_array(t_root *root, int *temp)
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
			if (root->stack_a[i] == temp[a])
			{
				root->stack_a[i] = a;
				break ;
			}
			a++;
		}
		i++;
	}
	free(temp);
}

void	indexing_array(t_root *root)
{
	int	*temp;
	int	i;
	int	a;

	i = 0;
	temp = ft_calloc(root->size, sizeof(int));
	if (!temp)
		ft_error("Memory error.", root);
	while (i < root->size)
	{
		temp[i] = root->stack_a[i];
		i++;	
	}
	i = 0;
	while (temp[i + 1])
	{
		if (temp[i] > temp[i + 1])
		{
			a = temp[i];
			temp[i] = temp[i + 1];
			temp[i + 1] = a;
			i = 0;
		}
		else
			i++;
	}
	convert_array(root, temp);
}