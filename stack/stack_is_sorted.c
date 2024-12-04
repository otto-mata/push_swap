/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 08:10:31 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/04 13:26:57 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	stack_is_sorted(t_stack *stack)
{
	int		ascending;
	int		descending;
	long	i;

	ascending = 1;
	descending = 1;
	i = 1;
	while (i < stack->len)
	{
		if (stack->content[i] < stack->content[i - 1])
			ascending = 0;
		else if (stack->content[i] > stack->content[i - 1])
			descending = 0;
		i++;
	}
	if (ascending)
		return (1);
	if (descending)
		return (-1);
	return (0);
}
