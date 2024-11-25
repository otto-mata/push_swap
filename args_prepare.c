/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_prepare.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:55:26 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/25 12:14:51 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	args_prepare(t_stringc arg)
{
	t_args *const	inst = args_instance();

	if (!inst || !arg)
		return (0);
	inst->args = ft_split(arg, ' ');
	if (!(inst->args))
		return (0);
	return (1);
}
