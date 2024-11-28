/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:21:43 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/28 19:21:04 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a_optimize(void)
{
	t_core	*core;

	core = core_instance();
	if (!core)
		return ;
	core->ref->len -= 3;
	while (core->ref->len)
	{
		op_insertion_sort(op_get_best());
		core->ref->len--;
	}
	stack_replace_a();
}

void	push_b_optimize(void)
{
	t_core	*core;

	core = core_instance();
	if (!core)
		return ;
	while (stack_inner(core->a) && core->ref->len >= 8)
	{
		if (stack_first(core->a) >= core->ref->q1
			&& stack_first(core->a) <= core_get_ref_mid())
			(pb(), rb());
		if (stack_first(core->a) <= core->ref->q3
			&& stack_first(core->a) >= core_get_ref_mid())
			pb();
		else
			ra();
	}
	while (core->a->len > 3)
	{
		pb();
		if (stack_first(core->b) > core_get_ref_mid())
			rb();
	}
	if (!(stack_is_sorted(core->a)))
		stack_sort_three_a();
	push_a_optimize();
}

int	main(int argc, char const *argv[])
{
	if (argc == 1)
		return (0);
	if (argc == 2)
		args_prepare(argv[1]);
	else
		args_use_argv(argv + 1);
	args_register_handler(&validator_all_atoi_safe);
	args_register_handler(&validator_all_int32);
	args_register_handler(&transformer_atoi);
	args_register_handler(&validator_all_uniq);
	if (!args_validate())
	{
		write(2, "Error\n", ft_strlen("Error\n"));
		return (1);
	}
	core_init();
	args_destroy();
	handler_stack_sort();
	osgc_clear();
	return (0);
}
