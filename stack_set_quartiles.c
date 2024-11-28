/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_set_quartiles.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:49:30 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/28 18:00:42 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_set_quartiles(t_stack *stack)
{
	if (stack->len % 2 == 0)
		stack->mid = stack->len / 2;
	else
		stack->mid = (stack->len + 1) / 2;
	if (stack->mid % 2 == 0)
		stack->q1 = stack->mid / 2;
	else
		stack->q1 = (stack->mid + 1) / 2;
	stack->q3 = stack->mid + stack->q1;
	if (stack->len > 5)
	{
		stack->q1 = stack->content[stack->q1];
		stack->q3 = stack->content[stack->q3];
	}
	else
	{
		stack->q1 = 0;
		stack->q3 = 0;
	}
}
