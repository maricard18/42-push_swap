/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_structs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:05:50 by maricard          #+#    #+#             */
/*   Updated: 2023/04/13 18:31:44 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_structs(t_root *root)
{
	root->a = 0;
	root->b = 0;
	root->temp = 0;
	root->size = 0;
	root->min = 0;
	root->max = 0;
	root->moves = 0;
}
