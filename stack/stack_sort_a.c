/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:29:22 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/04 13:31:07 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_sort_a(void)
{
	t_core	*core;

	core = core_instance();
	if (!core)
		return ;
	core->ref->len -= 3;
	while (core->ref->len)
	{
		op_insertion_sort(op_get_best());
		core->ref->len--;
	}
	stack_replace_a();
}
