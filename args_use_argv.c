/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_use_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:26:11 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/25 14:07:59 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	args_use_argv(t_stringc *argv)
{
	t_args *const	inst = args_instance();

	if (!inst || !argv)
		return ;
	inst->args = (char **)argv;
}
