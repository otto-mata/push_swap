/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_validate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:42:05 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/28 19:08:57 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	args_validate(void)
{
	t_args *const	inst = args_instance();
	int				i;

	i = 0;
	if (!inst)
		return (0);
	while (inst->validators[i] && !inst->error)
	{
		inst->validators[i]();
		i++;
	}
	return (!inst->error);
}
