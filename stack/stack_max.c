/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_max.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:03:15 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/04 13:27:08 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	stack_max(t_stack *stack)
{
	int		max;
	long	i;

	max = INT32_MIN;
	i = 0;
	while (i < stack->len)
	{
		if (stack->content[i] > max)
			max = stack->content[i];
		i++;
	}
	return (max);
}
