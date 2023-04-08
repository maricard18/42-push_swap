/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:09:27 by maricard          #+#    #+#             */
/*   Updated: 2023/04/08 12:18:57 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *str, t_root *root)
{
	if (root->stack_a)
		free(root->stack_a);
	if (root->stack_b)
		free(root->stack_b);
	ft_printf("Error\n");
	ft_printf("%s\n", str);
	exit(0);
}