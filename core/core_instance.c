/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_instance.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 08:01:15 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/28 19:08:53 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_core	*core_instance(void)
{
	static t_core	*inst = 0;

	if (!inst)
	{
		inst = osgc_malloc(sizeof(t_core));
		if (!inst)
			return (0);
		inst->a_sorted = 0;
		inst->b_empty = 1;
		inst->op_count = 0;
		inst->operations = ft_strdup("");
		if (!inst->operations)
			return (0);
	}
	return (inst);
}
