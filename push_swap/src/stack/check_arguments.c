/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:03:17 by maricard          #+#    #+#             */
/*   Updated: 2023/04/19 10:27:10 by maricard         ###   ########.fr       */
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
	if (!root->stack_b)
		ft_error("Memory error.", root);
	while (argv[i])
	{
		root->stack_a[a] = atoi(argv[i]);
		i++;
		a++;
	}
}

int	check_int_range(char **argv, int i)
{
	int	a;

	a = ft_strlen(argv[i]);
	if (a > 18)
		return (1);
	if (argv[i][0] == '-')
	{
		if (long_atoi(argv[i]) < INT_MIN)
			return (1);
	}
	else
	{
		if (long_atoi(argv[i]) > INT_MAX)
			return (1);
	}
	return (0);
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
				ft_error("Invalid Arguments.", root);
		}
		if (check_int_range(argv, i) == 1)
			ft_error("Argument is out of the int range.", root);
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
