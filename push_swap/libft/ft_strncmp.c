/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:34:43 by maricard          #+#    #+#             */
/*   Updated: 2022/11/22 10:45:40 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] && s2[i] && n - 1 > 0)
	{
		if (s1[i] != s2[i])
		{
			break ;
		}
		i++;
		n--;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int    main()
{
	char	s1[] = "12355";
	char	s2[] = "12345";
	size_t	n = 3;

    printf("\nMINHA FUNÇÃO\n");
    printf("\n%s\n", s1);
    printf("%s\n", s2);
	printf("%d\n", ft_strncmp(s1, s2, n));
    printf("\n---------------");
    printf("\n---------------\n");
    printf("\nFUNÇÃO LIVRARIA\n");
    printf("\n%s\n", s1);
    printf("%s\n", s2);
	printf("%d\n\n", strncmp(s1, s2, n));
}
*/
