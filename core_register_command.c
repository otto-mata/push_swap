/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_register_command.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:03:40 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/23 19:07:59 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	core_register_command(char *cmd)
{
	t_core	*core;

	core = core_instance();
	if (!core)
		return ;
	core->operations = ft_strjoin(core->operations, ft_strjoin(cmd, "\n"));
}
