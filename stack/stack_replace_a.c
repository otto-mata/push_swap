/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_replace_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:26:24 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/04 13:27:30 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_replace_a(void)
{
	int		m;
	ssize_t	index;
	t_core	*core;

	core = core_instance();
	if (!core)
		return ;
	m = stack_min(core->a);
	if (stack_first(core->a) != m)
	{
		index = stack_index_of(core->a, m);
		if (index <= core->a->len / 2)
			while (stack_first(core->a) != m)
				ra();
		else
			while (stack_first(core->a) != m)
				rra();
	}
}
