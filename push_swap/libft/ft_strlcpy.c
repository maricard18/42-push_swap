/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:32:58 by maricard          #+#    #+#             */
/*   Updated: 2022/11/22 09:40:41 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	length;

	length = 0;
	i = 0;
	while (src[i])
	{
		length++;
		i++;
	}
	if (size == 0)
		return (length);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (length);
}

/*
int	main()
{
	char	dest[5];
	char	src[]="mariohenriques";

	ft_strlcpy(dest, src, 5);
	printf("%s", dest);
	return 0;
}
*/
