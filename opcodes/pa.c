/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 08:35:15 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/23 19:09:24 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	pa(void)
{
	t_core	*core;

	core = core_instance();
	if (!core)
		return (0);
	if (!stackop_push(core->b, core->a))
		return (0);
	core->op_count += 1;
	core_register_command("pa");
	return (1);
}
