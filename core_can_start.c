/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_can_start.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:07:37 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/25 14:08:57 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	core_can_start(void)
{
	t_core	*core;

	core = core_instance();
	if (!core)
		return (0);
	return (!core->a_sorted);
}
