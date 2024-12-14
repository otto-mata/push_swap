/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_instance.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:37:26 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/14 13:54:48 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

t_checker	*checker_instance(void)
{
	static t_checker	*inst = 0;

	if (!inst)
	{
		inst = osgc_malloc(sizeof(t_checker));
		if (!inst)
			return (0);
		inst->instructions = 0;
		inst->instruction_count = 0;
	}
	return (inst);
}
