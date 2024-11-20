/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackop_shift_up.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:14:37 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/20 13:13:15 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*stackop_shift_up(t_stack *stack)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = stack->content[0];
	while (i <= stack->len)
	{
		stack->content[i] = stack->content[i - 1];
		i++;
	}
	stack->content[i] = tmp;
	return (stack);
}
