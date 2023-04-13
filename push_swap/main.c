/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:35:52 by maricard          #+#    #+#             */
/*   Updated: 2023/04/13 12:58:11 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_sorting(t_root *root, int argc)
{
	if (argc == 3)
		two(root);
	if (argc == 4)
		three(root);
	if (argc >= 5 && argc <= 6)
		five (root);
	// if (argc >= 7 && argc <= 101)
	// 	one_hundred(root);
	// if (argc >= 102)
	// 	five_hundred(root);
}

int	main(int argc, char **argv)
{
	t_root	root;

	ft_bzero(&root, sizeof(root));
	init_structs(&root);
	if (argc == 2)
		exit(0);
	check_arguments(argv, &root);
	tests(&root);
	start_sorting(&root, argc);
	tests(&root);
	return (0);
}
