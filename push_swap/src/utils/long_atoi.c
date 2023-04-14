/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:35:10 by maricard          #+#    #+#             */
/*   Updated: 2023/04/14 12:49:34 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long	long_atoi(char *str)
{
	long long num;
	int	i;
	int	signal;

	i = 0;
	signal = 1;
	num = 0;
	if (str[0] == '-')
	{
		signal = signal * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	num = num * signal;
	return (num);
}