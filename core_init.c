/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 08:02:46 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/22 08:21:59 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	core_init(int sz, char **raw_content)
{
	t_core	*core;

	core = core_instance();
	if (!core)
		return (0);
	core->a = stack_init(sz, raw_content);
	core->b = stack_reserve(sz);
	core->a_sorted = stack_is_sorted(core->a);
	return (1);
}
