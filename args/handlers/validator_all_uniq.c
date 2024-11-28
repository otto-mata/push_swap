/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator_all_uniq.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:11:42 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/28 19:10:46 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	validator_all_uniq(void)
{
	t_args *const	inst = args_instance();
	int				i;
	int				j;

	i = 0;
	if (!inst)
		return ;
	while (i < inst->count - 1 && !inst->error)
	{
		j = i + 1;
		while (j < inst->count && !inst->error)
		{
			if (inst->clean[i] == inst->clean[j])
			{
				inst->error = 1;
				return ;
			}
			j++;
		}
		i++;
	}
}
