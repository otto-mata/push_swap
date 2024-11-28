/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_index_of.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:39:01 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/28 19:04:20 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

ssize_t	stack_index_of(t_stack *stack, int n)
{
	ssize_t	i;

	i = 0;
	while (i < (ssize_t)(stack->len))
	{
		if (stack_value_at(stack, i) == n)
			return (i);
		i++;
	}
	return (-1);
}
