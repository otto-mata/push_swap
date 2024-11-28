/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transformer_atoi.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:23:21 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/28 19:10:45 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	transformer_atoi(void)
{
	t_args *const	inst = args_instance();
	int				i;

	if (!inst)
		return ;
	i = 0;
	while (inst->args[i])
		i++;
	inst->count = i;
	inst->clean = osgc_malloc(i * sizeof(int));
	if (!inst->clean)
		return ;
	i = 0;
	while (inst->args[i])
	{
		inst->clean[i] = ft_atoi(inst->args[i]);
		i++;
	}
}
