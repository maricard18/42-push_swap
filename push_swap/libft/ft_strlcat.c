/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:43:37 by maricard          #+#    #+#             */
/*   Updated: 2022/11/26 15:34:01 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	length_dst;
	size_t	length_src;

	i = 0;
	length_src = ft_strlen(src);
	length_dst = ft_strlen(dst);
	if (size <= length_dst)
	{
		return (length_src + size);
	}
	while (src[i] && (length_dst + i) < (size - 1))
	{
		dst[length_dst + i] = src[i];
		i++;
	}
	dst[length_dst + i] = '\0';
	return (length_dst + length_src);
}

/*
int    main()
{
	char	src[10] = "a";
	char	dst[] = "lorem ipsum dolor sit amet";
	size_t	n = 1;

    printf("\nMINHA FUNÇÃO\n");
    printf("\n%s\n", dst);
    ft_strlcat(dst, src, n);
    printf("%s\n", dst);
    printf("\n---------------");
    printf("\n---------------\n");
}
*/
