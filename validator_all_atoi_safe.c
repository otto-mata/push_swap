/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator_all_atoi_safe.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:46:07 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/25 12:14:34 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	can_atoi(char const *nptr)
{
	int	err;

	err = 0;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	if (*nptr && (*nptr >= '0' && *nptr <= '9'))
		err = 1;
	return (err);
}

void	validator_all_atoi_safe(void)
{
	t_args *const	inst = args_instance();
	int				i;
	int				j;
	char			*arg;

	i = 0;
	if (!inst)
		return ;
	while (inst->args[i] && !inst->error)
	{
		j = 0;
		arg = inst->args[i];
		if (!can_atoi(arg))
			inst->error = 1;
		while (arg[j] && !inst->error)
		{
			if (ft_isalpha(arg[j]))
			{
				inst->error = 1;
				return ;
			}
			j++;
		}
		i++;
	}
}
