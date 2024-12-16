/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 08:02:46 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/16 12:20:21 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	core_init(void)
{
	t_core	*core;
	t_args	*args;

	core = core_instance();
	args = args_instance();
	if (!core || !args)
		return (0);
	core->a = stack_init(args->count, args->clean);
	core->b = stack_reserve(args->count);
	core->ref = 0;
	core->a_sorted = stack_is_sorted(core->a);
	core->argc = args->count;
	return (1);
}
