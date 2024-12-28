/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator_all_int32.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:06:01 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/28 08:54:37 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static int	is_valid_int32(char const *nptr)
{
	int		sign;
	long	res;

	sign = 1;
	res = 0;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		sign -= (*nptr == '-') * 2;
		nptr++;
	}
	while (*nptr && (*nptr >= '0' && *nptr <= '9'))
	{
		res *= 10;
		res += *nptr - '0';
		nptr++;
	}
	if (res * sign > INT32_MAX || res * sign < INT32_MIN)
		return (0);
	return (1);
}

void	validator_all_int32(void)
{
	t_args *const	inst = args_instance();
	int				i;

	i = 0;
	if (!inst || !inst->args)
		return ;
	while (inst->args[i] && !inst->error)
	{
		if (!is_valid_int32(inst->args[i]))
		{
			inst->error = 1;
			return ;
		}
		i++;
	}
}
