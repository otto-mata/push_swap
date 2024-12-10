/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_value_at.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:43:10 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/10 12:28:39 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	stack_value_at(t_stack *stack, ssize_t index)
{
	if (index < 0)
		index = stack->len + index;
	return (stack->content[index]);
}
