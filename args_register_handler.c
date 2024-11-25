/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_register_validator.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:29:47 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/25 13:22:44 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	args_register_handler(t_handler_fn *fn)
{
	t_args *const	inst = args_instance();
	int				i;

	i = 0;
	if (!inst)
		return (0);
	while (inst->validators && inst->validators[i])
		i++;
	inst->validators = osgc_realloc(inst->validators, i * sizeof(void *), (i
				+ 2) * sizeof(void *));
	inst->validators[i] = fn;
	inst->validators[i + 1] = 0;
	return (1);
}
