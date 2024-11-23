/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort_three_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:14:18 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/23 19:25:25 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_sort_three_a(void)
{
	int				fst;
	int				scd;
	int				trd;
	t_core const	*core = core_instance();

	if (!core)
		return ;
	fst = core->a->content[0];
	scd = core->a->content[1];
	trd = core->a->content[2];
	if ((fst < scd) && (scd > trd))
	{
		rra();
		if ((fst < trd))
			sa();
	}
	else if ((fst > scd) && (scd < trd) && (fst > trd))
		ra();
	else if ((fst > scd) && (scd > trd))
	{
		sa();
		rra();
	}
	sa();
}
