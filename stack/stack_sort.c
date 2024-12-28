/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:00:40 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/28 08:58:46 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_sort(void)
{
	t_core	*core;

	core = core_instance();
	if (!core || !core->ref || !core->a)
		return ;
	if (core->ref->len == 2)
	{
		if (stack_value_at(core->a, 0) > stack_value_at(core->a, 1))
			sa();
	}
	else if (core->ref->len > 2)
		if (stack_is_sorted(core->a) < 1)
			stack_sort_b();
}
