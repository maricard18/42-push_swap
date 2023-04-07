/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:21:07 by maricard          #+#    #+#             */
/*   Updated: 2023/01/02 11:59:36 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		str = malloc(1 * sizeof(char));
		str[0] = '\0';
		return (str);
	}
	if (len < ft_strlen(s))
		str = malloc((len + 1) * sizeof(char));
	else
		str = malloc(((ft_strlen(s) - start) + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s[i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int	main()
{
	char			string[] = "ola tudo bem";
	unsigned int	i = 0;
	int			len = 3;

	printf("\n");
	printf("MINHA FUNÇÃO\n");
	printf("---------------\n");
	printf("%s\n", string);
	printf("start- %d\n", i);
	printf("length- %d\n", len);
	printf("%s\n",ft_substr(string, i, len ));
	printf("---------------\n");
	printf("\n");
	return (0);
}
*/
