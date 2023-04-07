/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:33:22 by maricard          #+#    #+#             */
/*   Updated: 2023/04/07 15:54:56 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// Libft
# include "libft.h"
# include "ft_printf.h"
# include "get_next_line.h"

// C libraries
# include <unistd.h>
# include <stdlib.h>

// Macros
# define INT_MAX 2147483647
# define INT_MIN -2147483648

// Structs
typedef struct s_root
{
	int	size;
	int	temp;
	int	*stack_a;
	int	*stack_b;
}		t_root;

// Functions
void	check_arguments(char **argv, t_root *root);

// Utils
void	ft_error(char *str, t_root *root);
void	init_structs(t_root *root);

#endif