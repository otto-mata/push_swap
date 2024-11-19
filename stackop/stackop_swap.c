/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackop_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:52:35 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/19 20:56:46 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stackop.h"

void	*stackop_swap(t_stack *stack)
{
	int	tmp;

	if (!stack)
		return (0);
	if (!stack->sz)
		return (stack);
	tmp = stack->content[0];
	stack->content[0] = stack->content[1];
	stack->content[1] = tmp;
	return (stack);
}
