/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 07:48:47 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/22 08:24:37 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_init(int sz, char **raw)
{
	t_stack	*stack;
	int		i;

	stack = stack_reserve(sz);
	if (!stack)
		return (0);
	i = 0;
	while (i < sz)
	{
		stack->content[i] = ft_atoi(raw[i]);
		i++;
	}
	stack->len = i;
	return (stack);
}
