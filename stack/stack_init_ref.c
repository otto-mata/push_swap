/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init_ref.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 07:48:47 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/28 19:08:20 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*stack_init_ref(int sz, int *args)
{
	t_stack		*stack;
	int			i;

	ft_quick_sort(args, 0, sz - 1);
	stack = stack_reserve(sz);
	if (!stack)
		return (0);
	i = 0;
	while (i < sz)
	{
		stack->content[i] = args[i];
		i++;
	}
	stack->len = i;
	stack_set_quartiles(stack);
	return (stack);
}
