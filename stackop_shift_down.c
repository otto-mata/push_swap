/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackop_shift_down.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:14:37 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/23 17:16:41 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*stackop_shift_down(t_stack *stack)
{
	unsigned long	i;
	int				tmp;

	tmp = stack->content[stack->len - 1];
	i = otto_min(stack->len, stack->sz);
	while (i)
	{
		ft_swap(&stack->content[i], &stack->content[i - 1]);
		i--;
	}
	stack->content[0] = tmp;
	return (stack);
}
