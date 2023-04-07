/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:25:37 by maricard          #+#    #+#             */
/*   Updated: 2022/11/24 19:22:34 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	a;

	i = 0;
	if (!s1 || !set)
		return (0);
	a = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (a >= i && ft_strchr(set, s1[a]))
		a--;
	return (ft_substr(s1, i, (a + 1) - i));
}

/*
int	main()
{
	char	s1[] = "12323131";
	char	set[] = "123";

	printf("\n");
	printf("MINHA FUNÇÃO\n");
	printf("---------------\n");
	printf("%s\n", s1);
	printf("%s\n", set);
	printf("%s\n",ft_strtrim(s1, set));
	printf("---------------\n");
}
*/
