/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_insertion_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:10:16 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/28 19:11:33 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	op_insertion_sort(int n)
{
	size_t	pos_a;
	size_t	pos_b;
	size_t	i;
	t_core	*core;

	core = core_instance();
	if (!core)
		return ;
	pos_a = stack_get_target_place(core->a, n);
	pos_b = stack_index_of(core->b, n);
	i = op_optimize(pos_a, pos_b);
	while (stack_first(core->b) != n)
	{
		if (pos_b <= (core->b->len / 2))
			rb();
		else
			rrb();
	}
	if (pos_a <= (core->a->len / 2))
		while (i < pos_a)
			(ra(), ++i);
	else
		while (i < (core->a->len - pos_a))
			(rra(), ++i);
	pa();
}
