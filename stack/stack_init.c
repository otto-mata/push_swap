/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 07:48:47 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/14 20:12:01 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*stack_init(int sz, int *args)
{
	t_stack	*stack;
	int		i;

	stack = stack_reserve(sz);
	if (!stack)
		return (0);
	i = 0;
	while (i < sz)
	{
		stack->content[i] = args[i];
		i++;
	}
	stack->bottom_value = stack->content[i - 1];
	stack->len = i;
	return (stack);
}
