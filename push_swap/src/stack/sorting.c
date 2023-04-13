/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:03:13 by maricard          #+#    #+#             */
/*   Updated: 2023/04/13 15:04:54 by maricard         ###   ########.fr       */
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
	if (argc >= 7 && argc <= 101)
		one_hundred(root);
	// if (argc >= 102)
	// 	five_hundred(root);
}
