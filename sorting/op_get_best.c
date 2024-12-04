/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_get_best.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:56:31 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/04 13:40:12 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	op_get_best(void)
{
	t_core	*core;
	int		best_move_elem;
	int		move_count;
	int		best_move_count;
	ssize_t	i;

	core = core_instance();
	if (!core)
		return (0);
	best_move_elem = stack_first(core->b);
	best_move_count = op_cost(best_move_elem);
	i = 1;
	while (i < core->b->len)
	{
		move_count = op_cost(stack_value_at(core->b, i));
		if (move_count < best_move_count)
		{
			best_move_count = move_count;
			best_move_elem = stack_value_at(core->b, i);
		}
		i++;
	}
	return (best_move_elem);
}
