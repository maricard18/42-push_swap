/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 01:03:32 by maricard          #+#    #+#             */
/*   Updated: 2022/11/10 17:53:51 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int x)
{
	if (x >= 0 && x <= 127)
		return (1);
	return (0);
}

/*
int	main()
{
	printf("minha função\n");
	printf("%d\n", ft_isascii('2'));
	printf("%d\n", ft_isascii(200));
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii('V'));
	printf("%d\n", ft_isascii('$'));
	printf("%d\n", ft_isascii(0));
	printf("\n");
	printf("função livraria\n");
	printf("%d\n", isascii('2'));
	printf("%d\n", isascii(200));
	printf("%d\n", isascii('a'));
	printf("%d\n", isascii('V'));
	printf("%d\n", isascii('$'));
	printf("%d\n", isascii(0));
}
*/
