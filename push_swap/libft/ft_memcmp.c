/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 19:12:06 by maricard          #+#    #+#             */
/*   Updated: 2022/11/25 10:47:59 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	int					i;

	s1 = (unsigned char *)b1;
	s2 = (unsigned char *)b2;
	i = 0;
	while (len > 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		len--;
	}
	return (0);
}

/*
int    main()
{
	char	b1[] = "123456";
	char	b2[] = "123a56";
	size_t	n = 5;
	printf("\nMINHA FUNÇÃO\n");
	printf("\nstring 1 -%s\n", b1);
	printf("string 2 -%s\n", b2);
	printf("\n%i\n", ft_memcmp(b2, b1, n));
	printf("\n---------------");
	printf("\n---------------\n");
}
*/
