/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_enable_debug_mode.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:22:25 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/14 19:38:11 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

void	core_enable_debug_mode(void)
{
	t_core *const	core = core_instance();

	if (!core)
		return ;
	core->debug_mode = true;
}
