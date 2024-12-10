/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_get_target_place.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:02:03 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/10 13:06:31 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	stack_get_target_place(t_stack *stack, int n)
{
	int		min;
	ssize_t	i;

	min = stack_min(stack);
	if (n > stack_max(stack) || n < min)
		return (stack_index_of(stack, min));
	i = 0;
	while (i < stack->len)
	{
		if (stack_value_at(stack, i - 1) < n && n < stack_value_at(stack, i))
			return (i);
		i++;
	}
	return (0);
}
