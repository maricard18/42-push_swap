/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:17:25 by maricard          #+#    #+#             */
/*   Updated: 2022/11/30 12:10:14 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_number(int x, int *len)
{
	size_t	nb;

	nb = x;
	if (x < 0)
	{
		(*len)++;
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb < 10)
	{
		(*len)++;
		ft_putchar(nb + '0');
	}
	else
	{
		ft_number(nb / 10, len);
		ft_number(nb % 10, len);
	}
}
