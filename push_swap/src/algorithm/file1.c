/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 10:37:07 by maricard          #+#    #+#             */
/*   Updated: 2023/04/08 18:47:18 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test1(t_root *root)
{
	sa(root, 1);
	tests(root);
	pb(root);
	tests(root);
	pb(root);
	tests(root);
	pb(root);
	tests(root);
	sb(root, 1);
	tests(root);
	rb(root, 1);
	tests(root);
	rrb(root, 1);
	tests(root);
}
