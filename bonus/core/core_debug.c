/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_debug.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:22:25 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/14 20:28:35 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

bool	core_debug(void)
{
	t_core *const	core = core_instance();

	if (!core)
		return (false);
	return (core->debug_mode);
}
