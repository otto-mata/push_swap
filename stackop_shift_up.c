/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackop_shift_up.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:14:37 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/21 20:26:52 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*stackop_shift_up(t_stack *stack)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack->content[0];
	while (i < stack->len - 1)
	{
		ft_swap(&stack->content[i], &stack->content[i + 1]);
		i++;
	}
	stack->content[i] = tmp;
	return (stack);
}
