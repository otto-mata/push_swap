/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:21:43 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/16 14:00:07 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	core_init_ref();
	args_destroy();
	stack_sort();
	osgc_clear();
	return (0);
}
