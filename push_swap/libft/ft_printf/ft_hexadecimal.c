/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 08:55:08 by maricard          #+#    #+#             */
/*   Updated: 2022/11/30 12:18:01 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexadecimal(unsigned long n, int *len)
{
	if (n <= 9)
	{
		(*len)++;
		ft_putchar(n + '0');
	}
	else if (n >= 16)
	{
		ft_hexadecimal(n / 16, len);
		ft_hexadecimal(n % 16, len);
	}
	else if (n > 9 && n < 16)
	{	
		(*len)++;
		ft_putchar(n - 10 + 'a');
	}
}
