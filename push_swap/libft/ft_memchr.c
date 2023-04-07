/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 09:41:46 by maricard          #+#    #+#             */
/*   Updated: 2022/11/20 11:38:23 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (n > 0)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
		n--;
	}
	return (0);
}

/*
int    main()
{
	char	str[] = "mario";
	int		a = 'r';
	size_t	n = 5;

	char 	*final;
	final = ft_memchr(str, a, n);

    printf("\nMINHA FUNÇÃO\n");
    printf("\n%s\n", str);
    printf("%s\n", final);
    printf("\n---------------");
    printf("\n---------------\n");
}
*/
