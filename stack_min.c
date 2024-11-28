/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_min.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:02:49 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/28 19:04:17 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	stack_min(t_stack *stack)
{
	int				min;
	unsigned long	i;

	min = INT32_MAX;
	i = 0;
	while (i < stack->len)
	{
		if (stack->content[i] < min)
			min = stack->content[i];
		i++;
	}
	return (min);
}
