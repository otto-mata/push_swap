/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 08:33:07 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/28 19:12:25 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rb(void)
{
	t_core	*core;

	core = core_instance();
	if (!core)
		return (0);
	if (!stackop_shift_up(core->b))
		return (0);
	core->op_count += 1;
	ft_print_op("rb");
	return (1);
}
