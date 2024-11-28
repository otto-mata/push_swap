/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_cost.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:58:07 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/28 17:33:58 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	op_cost(int n)
{
	t_core	*core;
	int		cost;
	size_t	i;

	core = core_instance();
	if (!core)
		return (0);
	i = stack_index_of(core->b, n);
	cost = 1;
	if (i > 1 && i > (core->b->len / 2))
		cost += core->b->len - i - 1;
	else if (i > 1 && i <= (core->b->len / 2))
		cost += i - 1;
	i = stack_get_target_place(core->a, n);
	if (i > 1 && i > (core->a->len / 2))
		cost += core->a->len - i - 1;
	else if (i > 1 && i <= (core->a->len / 2))
		cost += i - 1;
	return (cost);
}
