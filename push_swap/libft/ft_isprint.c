/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:20:04 by maricard          #+#    #+#             */
/*   Updated: 2022/11/22 10:40:39 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int x)
{
	if (x >= 32 && x <= 126)
		return (1);
	return (0);
}

/*
int	main()
{
	printf("minha função\n");
	printf("%d\n", ft_isprint('2'));
	printf("%d\n", ft_isprint(23));
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('V'));
	printf("%d\n", ft_isprint('$'));
	printf("%d\n", ft_isprint(0));
	printf("\n");
	printf("função livraria\n");
	printf("%d\n", isprint('2'));
	printf("%d\n", isprint(23));
	printf("%d\n", isprint('a'));
	printf("%d\n", isprint('V'));
	printf("%d\n", isprint('$'));
	printf("%d\n", isprint(0));

}
*/
