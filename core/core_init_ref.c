/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_init_ref.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 14:13:05 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/14 14:14:51 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	core_init_ref(void)
{
	t_core	*core;
	t_args	*args;

	core = core_instance();
	args = args_instance();
	if (!core || !args)
		return (0);
	core->ref = stack_init_ref(args->count, args->clean);
	return (!!(core->ref));
}
