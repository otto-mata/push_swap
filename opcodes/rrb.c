/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 08:33:07 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/22 08:44:46 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rrb(void)
{
	t_core	*core;

	core = core_instance();
	if (!core)
		return (0);
	if (!stackop_shift_down(core->b))
		return (0);
	core->op_count += 1;
	return (1);
}
