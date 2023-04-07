/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:56:52 by maricard          #+#    #+#             */
/*   Updated: 2022/11/25 10:55:21 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

/*
int main()
{
	char	str[] = "ola tudo bem";
	int		c = 'a';

	printf("\nSTRING- %s\nCHAR- %c\n", str, c);
	printf("\n-------------\n");
	printf("\nMINHA FUNCAO\n");
	printf("%s\n", ft_strchr(str, c));
	printf("\n");
	printf("FUNCAO LIVRARIA\n");
	printf("%s\n", strchr(str, c));
}
*/
