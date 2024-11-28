/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort_three_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:14:18 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/28 19:04:05 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_sort_three_a(void)
{
	int		fst;
	int		scd;
	int		trd;
	t_core	*core;

	core = core_instance();
	if (!core)
		return ;
	fst = stack_value_at(core->a, 0);
	scd = stack_value_at(core->a, 1);
	trd = stack_value_at(core->a, 2);
	if ((fst < scd) && (scd > trd) && (fst < trd))
		(rra(), sa());
	else if ((fst < scd) && (scd > trd) && (fst > trd))
		rra();
	else if ((fst > scd) && (scd < trd) && (fst > trd))
		ra();
	else if ((fst > scd) && (scd > trd))
	{
		sa();
		rra();
	}
	else
		sa();
}
