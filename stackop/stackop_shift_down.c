/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackop_shift_down.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:14:37 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/19 21:20:56 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stackop.h"

void	*stackop_shift_down(t_stack *stack)
{
	int	i;

	if (stack->len == stack->sz)
		return (0);
	i = stack->len;
	while (i > 0)
	{
		stack->content[i] = stack->content[i + 1];
		i--;
	}
	return (stack);
}
