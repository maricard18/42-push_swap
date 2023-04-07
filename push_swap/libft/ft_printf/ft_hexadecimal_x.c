/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:21:07 by maricard          #+#    #+#             */
/*   Updated: 2022/11/30 12:13:43 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexadecimal_x(unsigned long n, int *len)
{
	if (n <= 9)
	{
		(*len)++;
		ft_putchar(n + '0');
	}
	else if (n >= 16)
	{
		ft_hexadecimal_x(n / 16, len);
		ft_hexadecimal_x(n % 16, len);
	}
	else if (n > 9 && n < 16)
	{
		(*len)++;
		ft_putchar(n - 10 + 'A');
	}
}
