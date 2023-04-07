/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 00:47:02 by maricard          #+#    #+#             */
/*   Updated: 2022/11/10 17:51:49 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int x)
{
	if (x >= '0' && x <= '9')
		return (1);
	return (0);
}

/*
int	main()
{
	printf("minha função\n");
	printf("%d\n", ft_isdigit('2'));
	printf("%d\n", ft_isdigit(23));
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('V'));
	printf("%d\n", ft_isdigit('$'));
	printf("%d\n", ft_isdigit(0));
	printf("\n");
	printf("função livraria\n");
	printf("%d\n", isdigit('2'));
	printf("%d\n", isdigit(23));
	printf("%d\n", isdigit('a'));
	printf("%d\n", isdigit('V'));
	printf("%d\n", isdigit('$'));
	printf("%d\n", isdigit(0));
}
*/
