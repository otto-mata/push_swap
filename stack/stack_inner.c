/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_inner.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:01:31 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/28 08:56:46 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	stack_inner(t_stack *stack)
{
	ssize_t	i;
	int		val;
	t_core	*core;

	core = core_instance();
	if (!core || !stack)
		return (false);
	i = 0;
	while (i < stack->len)
	{
		val = stack_value_at(stack, i);
		if (core->ref->q1 <= val && val <= core->ref->q3)
			return (true);
		i++;
	}
	return (false);
}
