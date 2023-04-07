/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 00:58:37 by maricard          #+#    #+#             */
/*   Updated: 2022/11/10 17:52:11 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int x)
{
	if (x >= '0' && x <= '9')
		return (1);
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		return (1);
	return (0);
}

/*
int	main()
{
	printf("minha função\n");
	printf("%d\n", ft_isalnum('2'));
	printf("%d\n", ft_isalnum(23));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('V'));
	printf("%d\n", ft_isalnum('$'));
	printf("%d\n", ft_isalnum(0));
	printf("\n");
	printf("função livraria\n");
	printf("%d\n", isalnum('2'));
	printf("%d\n", isalnum(23));
	printf("%d\n", isalnum('a'));
	printf("%d\n", isalnum('V'));
	printf("%d\n", isalnum('$'));
	printf("%d\n", isalnum(0));
}
*/
