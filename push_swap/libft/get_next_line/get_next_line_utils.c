/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 10:43:04 by maricard          #+#    #+#             */
/*   Updated: 2023/02/20 11:38:08 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_string_chr(char *buf, char c)
{
	int	i;

	i = 0;
	if (!buf)
		return (0);
	while (buf[i])
	{
		if (buf[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_string_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_string_join(char *str1, char *str2)
{
	int		i;
	int		a;
	char	*str;

	if (!str1)
		return (0);
	i = ft_string_len(str1);
	a = ft_string_len(str2);
	str = malloc(sizeof(char) * ((i + a) + 1));
	if (!str)
		return (0);
	i = 0;
	a = 0;
	while (str1[i])
	{
		str[a++] = str1[i++];
	}
	i = 0;
	while (str2[i])
	{
		str[a++] = str2[i++];
	}
	str[a] = '\0';
	free(str1);
	return (str);
}
