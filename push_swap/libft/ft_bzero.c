/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:10:49 by maricard          #+#    #+#             */
/*   Updated: 2022/11/25 10:39:26 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
		((char *)s)[n] = 0;
}

/*
int	main(void)
{
	char	str[] = "ola tudo bem";
	char	str1[] = "ola tudo bem";
	size_t	n = 5;

	ft_bzero(str, n);
	printf("%c\n", str[4]);
	bzero(str1, n);
	printf("%c\n", str1[4]);
	return (0);
}
*/
