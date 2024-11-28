/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_destroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:29:59 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/28 15:38:32 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	args_destroy(void)
{
	t_args	*instance;
	int		iter;

	iter = 0;
	instance = args_instance();
	if (!instance)
		return ;
	osgc_free(instance->validators);
	osgc_free(instance->clean);
	if (instance->must_clean_args)
	{
		while (instance->args[iter])
			osgc_free(instance->args[iter++]);
		osgc_free(instance->args);
	}
	osgc_free(instance);
}
