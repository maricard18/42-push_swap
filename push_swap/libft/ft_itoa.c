/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:57:12 by maricard          #+#    #+#             */
/*   Updated: 2022/11/25 16:35:54 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_string(int n, int i, char *str)
{
	size_t	nb;

	nb = n;
	while (i >= 0)
	{
		if (n < 0)
		{
			str[0] = '-';
			nb = nb * -1;
		}
		if (nb < 10)
		{
			str[i] = nb + '0';
			break ;
		}
		if (nb > 9)
		{
			ft_string(nb % 10, i, str);
			i--;
			ft_string(nb / 10, i, str);
			break ;
		}
	}
	return (str);
}

static int	ft_length(int n)
{
	int		i;
	size_t	x;

	i = 0;
	x = n;
	if (n < 0)
	{
		i++;
		x = x * -1;
	}
	if (x == 0)
		i = 1;
	while (x > 0)
	{
		x = x / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = ft_length(n);
	str = malloc(i * sizeof(char) + 1);
	if (!str)
		return (0);
	str[i] = '\0';
	i = i - 1;
	return (ft_string(n, i, str));
}

/*
int	main(void)
{
	printf("-----------\n");
	printf("NUMERO| %s\n", ft_itoa(2147448));
	printf("-----------\n");
}
*/
