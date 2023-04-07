/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 00:00:44 by maricard          #+#    #+#             */
/*   Updated: 2022/11/10 17:51:28 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		return (1);
	return (0);
}

/*
int	main()
{
	printf("minha função\n");
	printf("%d\n", ft_isalpha(2));
	printf("%d\n", ft_isalpha(23));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('V'));
	printf("%d\n", ft_isalpha('$'));
	printf("%d\n", ft_isalpha(0));
	printf("\n");
	printf("função livraria\n");
	printf("%d\n", isalpha(2));
	printf("%d\n", isalpha(23));
	printf("%d\n", isalpha('a'));
	printf("%d\n", isalpha('V'));
	printf("%d\n", isalpha('$'));
	printf("%d\n", isalpha(0));
}
*/
