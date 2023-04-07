/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:22:38 by maricard          #+#    #+#             */
/*   Updated: 2022/11/10 18:05:53 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
int	main()
{
	char	str[] = "";
	int	x = ft_strlen(str);

	ft_strlen(str);
	printf("%d\n", x);
	printf("%ld", strlen(str));
	return 0;
}
*/
