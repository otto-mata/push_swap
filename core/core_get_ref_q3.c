/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_get_ref_q3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:45:29 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/28 19:08:53 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	core_get_ref_q3(void)
{
	t_core	*core;

	core = core_instance();
	if (!core)
		return (0);
	return (stack_value_at(core->ref, core->ref->q3));
}
