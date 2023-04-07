/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 08:30:14 by maricard          #+#    #+#             */
/*   Updated: 2023/02/22 11:46:58 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//C libraries
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

//Map Struct
typedef struct map_values{
	int		lines;
	int		columns;
	char	**map_array;
	int		collectibles;
	int		exits;
	int		players;
}			t_map_values;

//Function Prototypes
int		ft_printf(const char *str, ...);
int		ft_char(int c);
int		ft_string(char *str);
int		ft_pointer(unsigned long long k);
void	ft_putchar(int c);
void	ft_unsigned(unsigned int x, int *len);
void	ft_number(int x, int *len);
void	ft_hexadecimal(unsigned long n, int *len);
void	ft_hexadecimal_x(unsigned long n, int *len);

#endif
