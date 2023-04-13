/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:09:27 by maricard          #+#    #+#             */
/*   Updated: 2023/04/13 15:16:16 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stuff(t_root *root)
{
	if (root->stack_a)
		free(root->stack_a);
	if (root->stack_b)
		free(root->stack_b);
}

void	ft_error(char *str, t_root *root)
{
	ft_printf("Error\n");
	ft_printf("%s\n", str);
	free_stuff(root);
	exit(0);
}
