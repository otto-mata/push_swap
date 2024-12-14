/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_apply.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:07:00 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/14 18:04:17 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

void	checker_apply(void)
{
	t_checker	*checker;
	t_core		*core;
	int			i;

	checker = checker_instance();
	core = core_instance();
	if (!checker || !core)
		return ;
	i = 0;
	while (checker->instructions && checker->instructions[i])
		checker->instructions[i++]();
	stack_print(core->a, "a");
	stack_print(core->b, "b");
}
