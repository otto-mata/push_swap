/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackop_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:52:35 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/28 09:03:52 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	*stackop_swap(t_stack *stack)
{
	if (!stack || !stack->content)
		return (0);
	if (!stack->sz)
		return (stack);
	ft_swap(&stack->content[0], &stack->content[1]);
	return (stack);
}
