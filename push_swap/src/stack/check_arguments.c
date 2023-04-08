/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:03:17 by maricard          #+#    #+#             */
/*   Updated: 2023/04/08 17:04:08 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_duplicate(t_root *root)
{
	int	i;
	int	a;

	i = 0;
	while (root->stack_a[i])
		i++;
	while (i > 0)
	{
		a = i - 1;
		while (a >= 0)
		{
			if (root->stack_a[a] == root->stack_a[i])
				ft_error("Arguments can't be duplicate!", root);
			a--;
		}
		i--;
	}
}

void	put_to_stack(char **argv, t_root *root)
{
	int	i;
	int	a;

	i = 1;
	a = 0;
	root->stack_a = ft_calloc(root->size, sizeof(int));
	if (!root->stack_a)
		ft_error("Memory error.", root);
	root->stack_b = ft_calloc(root->size, sizeof(int));
	if (!root->stack_a)
		ft_error("Memory error.", root);
	while (argv[i])
	{
		root->stack_a[a] = atoi(argv[i]);
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
			if (argv[i][a] == '-' && a == 0)
				a++;
			if (argv[i][a] >= '0' && argv[i][a] <= '9')
				a++;
			else
				ft_error("Arguments must be numbers.", root);
		}
		i++;
	}
	root->size = i - 1;
	root->a = i - 1;
}

void	check_arguments(char **argv, t_root *root)
{
	is_number(argv, root);
	put_to_stack(argv, root);
	is_duplicate(root);
}
