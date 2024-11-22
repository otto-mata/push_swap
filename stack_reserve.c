/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_reserve.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 07:48:46 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/22 08:24:49 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_reserve(int sz)
{
	t_stack	*stack;

	stack = osgc_malloc(sizeof(t_stack));
	if (!stack)
		return (0);
	stack->sz = sz;
	stack->content = osgc_malloc(sz * sizeof(int));
	stack->len = 0;
	if (!stack->content)
		return (0);
	return (stack);
}
