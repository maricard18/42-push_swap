/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:33:22 by maricard          #+#    #+#             */
/*   Updated: 2023/04/20 11:06:33 by maricard         ###   ########.fr       */
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
# include <stdbool.h>

// Macros
# define INT_MAX 2147483647
# define INT_MIN -2147483648

// Structs
typedef struct s_root
{
	int	size;
	int	a;
	int	b;
	int	k;
	int	i;
	int	min;
	int	max;
	int	nmin;
	int	nmax;
	int	max_bits;
	int	temp;
	int	moves;
	int	*t;
	int	*stack_a;
	int	*stack_b;
}		t_root;

// Functions
void		check_arguments(char **argv, t_root *root);
void		start_sorting(t_root *root, int argc);
void		find_min_a(t_root *root);
void		find_max_a(t_root *root);

// Utils
void		ft_error(t_root *root);
void		free_stuff(t_root *root);
void		init_structs(t_root *root);
void		tests(t_root *root);
void		indexing_array(t_root *root);
long long	long_atoi(char *str);

// Algorithm
void		two(t_root *root);
void		three(t_root *root);
void		four(t_root *root);
void		five(t_root *root);
void		radix(t_root *root);
// void	five_hundred(t_root *root);

// Operations
// Swap
void		sa(t_root *root, bool flag);
void		sb(t_root *root, bool flag);
void		ss(t_root *root);

// Rotate
void		ra(t_root *root, bool flag);
void		rb(t_root *root, bool flag);
void		rr(t_root *root);

// Reverse
void		rra(t_root *root, bool flag);
void		rrb(t_root *root, bool flag);
void		rrr(t_root *root);

// Push
void		pa(t_root *root);
void		pb(t_root *root);

#endif