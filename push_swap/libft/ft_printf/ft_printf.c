/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 08:35:09 by maricard          #+#    #+#             */
/*   Updated: 2022/11/30 13:22:27 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list *args, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = len + ft_char(va_arg(*args, int));
	else if (c == 's')
		len = len + ft_string(va_arg(*args, char *));
	else if (c == 'd' || c == 'i')
		ft_number((va_arg(*args, int)), &len);
	else if (c == 'x')
		ft_hexadecimal((va_arg(*args, unsigned int)), &len);
	else if (c == 'X')
		ft_hexadecimal_x((va_arg(*args, unsigned int)), &len);
	else if (c == 'u')
		ft_unsigned((va_arg(*args, unsigned int)), &len);
	else if (c == 'p')
		len = len + ft_pointer(va_arg(*args, unsigned long long));
	else if (c == '%')
	{
		len++;
		ft_putchar('%');
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		i;

	va_start (args, str);
	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			len = len + ft_format(&args, str[++i]);
		else
		{
			len++;
			ft_putchar(str[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}

/*
int	main(void)
{
	int	x = 0;

	printf("      ----------\n");
	printf("------| PRINTF |------\n");
	printf("      ----------\n");
	printf("  c    | %c  %c  %c\n", 'k', '1', '!');
	printf("  s    | %s  %s\n", "ola Mario", "xau");
	printf("d ou i | %i  %d %i\n", 4, 200, 2147483647);
	printf("x ou X | %x  %X\n", 12, 12);
	printf("  u    | %u  %u\n", 5, -1);
	printf("  p    | %p\n", &x);
	printf("  %%    | %%%%%%%%%%\n");
	printf("normal | ola tudo bem\n");
	printf(" MIX   | %c %i %s acabou\n", 'a', 100, "finalmente");
	printf("\n");
	ft_printf("     -------------\n");
	ft_printf("-----| FT_PRINTF |-----\n");
	ft_printf("     -------------\n");
	ft_printf("  c    | %c  %c  %c\n", 'k', '1', '!');
	ft_printf("  s    | %s  %s\n", "ola Mario", "xau");
	ft_printf("d ou i | %i  %d %i\n", 4, 200, 2147483647);
	ft_printf("x ou X | %x  %X\n", 12, 12);
	ft_printf("  u    | %u  %u\n", 5, -1);
	ft_printf("  p    | %p\n", &x);
	ft_printf("  %%    | %%%%%%%%%%\n");
	ft_printf("normal | ola tudo bem\n");
	ft_printf(" MIX   | %c %i %s acabou\n", 'a', 100, "finalmente");
}
*/
