/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:35:52 by maricard          #+#    #+#             */
/*   Updated: 2023/04/08 00:07:28 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test(t_root *root)
{
	int	i = 0;

	ft_printf("Stack A\n-------\n");
	while (i < root->size)
	{
		ft_printf("%d\n", root->stack_a);
		i++;
	}
	ft_prinf("Stack B\n-------\n");
	i = 0;
	while (i < root->stack_b)
	{
		ft_printf("%d\n", root->stack_b);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_root	root;
	
	ft_bzero(&root, sizeof(root));
	init_structs(&root);
	if (argc == 2)
		exit(0);
	check_arguments(argv, &root);
	
	test(&root);
	return (0);
}
