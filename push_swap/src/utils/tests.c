/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 10:32:23 by maricard          #+#    #+#             */
/*   Updated: 2023/04/08 11:32:26 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tests(int *stack, char c)
{
	int	i;

	i = 0;
	ft_printf("-------\nStack %c\n-------\n", c);
	while (stack[i])
	{
		ft_printf("   %d\n", stack[i]);
		i++;
	}
	ft_printf("-------\n");
}
