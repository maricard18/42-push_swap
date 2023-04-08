/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 10:37:07 by maricard          #+#    #+#             */
/*   Updated: 2023/04/08 12:32:22 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test1(t_root *root)
{
	sa(root, 1);
	tests(root->stack_a, 'a');
	pb(root);
	tests(root->stack_b, 'b');
	tests(root->stack_a, 'a');
}