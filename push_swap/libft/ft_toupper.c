/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:16:42 by maricard          #+#    #+#             */
/*   Updated: 2022/11/10 18:23:04 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*
int main()
{
	printf("minha função\n");
	printf("%d\n", ft_toupper('a'));
	printf("%d\n", ft_toupper('b'));
	printf("%d\n", ft_toupper('z'));
	printf("%d\n", ft_toupper('V'));
	printf("%d\n", ft_toupper('$'));
	printf("%d\n", ft_toupper(0));
	printf("\n");
	printf("função livraria\n");
	printf("%d\n", toupper('a'));
	printf("%d\n", toupper('b'));
	printf("%d\n", toupper('z'));
	printf("%d\n", toupper('V'));
	printf("%d\n", toupper('$'));
	printf("%d\n", toupper(0));
}
*/
