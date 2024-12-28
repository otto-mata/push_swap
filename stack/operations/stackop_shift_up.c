/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackop_shift_up.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:14:37 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/28 09:03:23 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	*stackop_shift_up(t_stack *stack)
{
	long	i;

	if (!stack || !stack->content)
		return (0);
	i = 0;
	while (i < stack->len - 1)
	{
		ft_swap(&stack->content[i], &stack->content[i + 1]);
		i++;
	}
	return (stack);
}
