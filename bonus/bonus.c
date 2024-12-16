/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:18:22 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/16 13:54:26 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

static void	register_all_args_handlers(void)
{
	args_register_handler(&validator_all_atoi_safe);
	args_register_handler(&validator_all_int32);
	args_register_handler(&transformer_atoi);
	args_register_handler(&validator_all_uniq);
}

static void	arguments_preparation(int argc, char const *argv[])
{
	if (argc == 2)
		args_prepare(argv[1]);
	else if (argc > 2 && _strcmp(argv[1], "-d") == 0)
		core_enable_debug_mode();
	if (core_debug())
	{
		if (argc == 3)
			args_prepare(argv[2]);
		else
			args_use_argv(argv + 2);
	}
	else
		args_use_argv(argv + 1);
}

int	main(int argc, char const *argv[])
{
	if (argc == 1)
		return (0);
	arguments_preparation(argc, argv);
	register_all_args_handlers();
	if (!args_validate())
	{
		write(2, "Error\n", ft_strlen("Error\n"));
		return (1);
	}
	core_init();
	args_destroy();
	core_enable_check_mode();
	checker_get_stdin();
	if (checker_apply())
		ft_putendl("OK");
	else
		ft_putendl("KO");
	osgc_clear();
	return (0);
}
