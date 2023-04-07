/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:06:20 by maricard          #+#    #+#             */
/*   Updated: 2022/11/22 14:49:43 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!src && !dest)
		return (0);
	if (src < dest)
	{
		while (n--)
		{
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	else if (src > dest)
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

/*
int    main()
{
	char	src_a[] = "12345";
	char	src_b[] = "12345";
	char	dst_a[] = "abcde";
	char	dst_b[] = "abcde";
	size_t	n = 3;

    printf("\nMINHA FUNÇÃO\n");
    printf("\n%s\n", dst_a);
    ft_memmove(dst_a, src_a, n);
    printf("%s\n", dst_a);
    printf("\n---------------");
    printf("\n---------------\n");
    printf("\nFUNÇÃO LIVRARIA\n");
    printf("\n%s\n", dst_b);
    memmove(dst_b ,src_b ,n);
    printf("%s\n\n", dst_b);
}
*/
