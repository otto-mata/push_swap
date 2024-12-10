/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 08:34:09 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/10 13:38:29 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rr(void)
{
	t_core	*core;

	core = core_instance();
	if (!core)
		return (0);
	if (!stackop_shift_up(core->a))
		return (0);
	if (!stackop_shift_up(core->b))
		return (0);
	core->op_count += 1;
	ft_print_op("rr");
	return (1);
}
