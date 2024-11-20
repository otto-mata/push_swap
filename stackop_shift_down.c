/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackop_shift_down.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:14:37 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/20 13:13:15 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*stackop_shift_down(t_stack *stack)
{
	int	i;
	int	tmp;

	tmp = stack->content[stack->len];
	i = stack->len - 1;
	while (i >= 0)
	{
		stack->content[i] = stack->content[i + 1];
		i--;
	}
	stack->content[i] = tmp;
	return (stack);
}
