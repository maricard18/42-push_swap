/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:46:08 by maricard          #+#    #+#             */
/*   Updated: 2022/11/25 11:12:00 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n > 0)
	{
		*str++ = (unsigned char)c;
		n--;
	}
	return (s);
}

/*
int	main()
{
	char	a[] = "ola tudo bem";
	char	b[] = "ola tudo bem";
	char	c = 'A';
	size_t	n = 4;

	printf("\nMINHA FUNÇÃO\n");
	printf("\n%s\n", a);
	ft_memset(a, c, n);
	printf("%s\n", a);
	printf("\n---------------");
	printf("\n---------------\n");
	printf("\nFUNÇÃO LIVRARIA\n");
	printf("\n%s\n", b);
	memset(b ,c ,n);
	printf("%s\n\n", b); 
}
*/
