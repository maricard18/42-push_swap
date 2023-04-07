/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:02:01 by maricard          #+#    #+#             */
/*   Updated: 2022/11/19 10:00:44 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*str_src;
	char		*str_dest;

	i = 0;
	str_src = (char *)src;
	str_dest = (char *)dest;
	if (!str_src && !str_dest)
		return (0);
	while (n > 0)
	{
		str_dest[i] = str_src[i];
		i++;
		n--;
	}
	return (dest);
}

/*
int    main()
{
	char	src_a[] = "123456";
	char	dest_a[] = "abcdef";
	char    src_b[] = "123456";
	char    dest_b[] = "avcdef";
	size_t	n = 5;

	printf("\nMINHA FUNÇÃO\n");
	printf("\n%s\n", dest_a);
	ft_memcpy(dest_a, src_a, n);
	printf("%s\n", dest_a);
	printf("\n---------------");
	printf("\n---------------\n");
	printf("\nFUNÇÃO LIVRARIA\n");
	printf("\n%s\n", dest_b);
	memcpy(dest_b, src_b, n);
	printf("%s\n\n", dest_b);
}
*/
