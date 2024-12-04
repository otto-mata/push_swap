/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:28:53 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/04 13:30:34 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_sort_b(void)
{
	t_core	*core;

	core = core_instance();
	if (!core)
		return ;
	while (stack_inner(core->a) && core->ref->len >= 8)
	{
		if (stack_first(core->a) >= core->ref->q1
			&& stack_first(core->a) <= core_get_ref_mid())
			(pb(), rb());
		if (stack_first(core->a) <= core->ref->q3
			&& stack_first(core->a) >= core_get_ref_mid())
			pb();
		else
			ra();
	}
	while (core->a->len > 3)
	{
		pb();
		if (stack_first(core->b) > core_get_ref_mid())
			rb();
	}
	if (!(stack_is_sorted(core->a)))
		stack_sort_three_a();
	stack_sort_a();
}