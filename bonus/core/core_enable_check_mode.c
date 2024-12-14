/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_enable_check_mode.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:22:25 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/14 14:02:27 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

void	core_enable_check_mode(void)
{
	t_core *const	core = core_instance();

	if (!core)
		return ;
	core->check_mode = true;
}
