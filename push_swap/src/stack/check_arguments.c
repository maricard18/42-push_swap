/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:03:17 by maricard          #+#    #+#             */
/*   Updated: 2023/04/08 00:46:18 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_to_stack(char **argv, t_root *root)
{
	int	i;
	int	a;

	i = 1;
	a = 0;
	root->stack_a = malloc(sizeof(int) * root->size);
	if (!root->stack_a)
		ft_error("Memory error.", root);
	while (argv[i])
	{
		root->stack_a[a]= atoi(argv[i]);
		i++;
		a++;
	}
}

void	is_number(char **argv, t_root *root)
{
	int	i;
	int	a;

	i = 1;
	while (argv[i])
	{
		a = 0;
		while (argv[i][a])
		{
			if (argv[i][a] >= '0' && argv[i][a] <= '9')
				a++;
			else
				ft_error("Arguments must be numbers.", root);
		}
		i++;
	}
	root->a = i;
}

void	check_arguments(char **argv, t_root *root)
{
	is_number(argv, root);
	put_to_stack(argv, root);
}