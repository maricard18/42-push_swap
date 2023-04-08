/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:00:58 by maricard          #+#    #+#             */
/*   Updated: 2023/04/08 00:48:28 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_root *root)
{
    int i;

    i = 0;
    root->temp = root->stack_a[0];
    root->stack_a[0] = root->stack_a[root->a - 1];
    root->stack_a[root->a - 1] = root->temp;
    while (i + 1 < root->a - 1)
    {
        root->temp = root->stack_a[i];
        root->stack_a[i] = root->stack_a[i + 1];
        root->stack_a[i + 1] = root->temp;
        i++;
    }
}

void    rb(t_root *root)
{
    int i;

    i = 0;
    root->temp = root->stack_b[0];
    root->stack_b[0] = root->stack_a[root->b - 1];
    root->stack_b[root->b - 1] = root->temp;
    while (i + 1 < root->b - 1)
    {
        root->temp = root->stack_b[i];
        root->stack_b[i] = root->stack_b[i + 1];
        root->stack_b[i + 1] = root->temp;
        i++;
    }
}

void    rr(t_root *root)
{
    ra(root);
    rb(root);
}