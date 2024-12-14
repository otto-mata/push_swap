/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:18:22 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/14 18:01:51 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

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
	core_enable_check_mode();
	checker_get_stdin();
	checker_apply();
	osgc_clear();
	return (0);
}
