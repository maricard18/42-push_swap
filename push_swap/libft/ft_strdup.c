/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:23:12 by maricard          #+#    #+#             */
/*   Updated: 2022/11/22 10:43:04 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		n;
	char	*str;

	i = 0;
	while (s[i])
		i++;
	str = malloc((i + 1) * (sizeof(char)));
	if (str == 0)
		return (0);
	n = i;
	i = 0;
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int	main()
{
	char	string[] = "ola tudo bem";

	printf("minha função\n");
	printf("%s\n", string);
	printf("%s\n", ft_strdup(string));
	printf("\n");

	printf("função livraria\n");
	printf("%s\n", string);
	printf("%s\n", strdup(string));
	return (0);
}
*/
