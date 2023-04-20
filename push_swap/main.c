/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:35:52 by maricard          #+#    #+#             */
/*   Updated: 2023/04/20 13:46:06 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_root	root;

	ft_bzero(&root, sizeof(root));
	init_structs(&root);
	if (argc <= 2)
		exit(0);
	check_arguments(argv, &root);
	start_sorting(&root, argc);
	free_stuff(&root);
	exit(0);
	return (0);
}
