/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:21:45 by maricard          #+#    #+#             */
/*   Updated: 2022/11/10 18:23:28 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*
int main()
{
	printf("minha função\n");
	printf("%d\n", ft_tolower('A'));
	printf("%d\n", ft_tolower('B'));
	printf("%d\n", ft_tolower('Z'));
	printf("%d\n", ft_tolower('d'));
	printf("%d\n", ft_tolower('$'));
	printf("%d\n", ft_tolower(0));
	printf("\n");
	printf("função livraria\n");
	printf("%d\n", tolower('A'));
	printf("%d\n", tolower('B'));
	printf("%d\n", tolower('Z'));
	printf("%d\n", tolower('d'));
	printf("%d\n", tolower('$'));
	printf("%d\n", tolower(0));
}
*/
