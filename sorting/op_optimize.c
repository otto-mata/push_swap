/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_optimize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:12:32 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/28 19:11:33 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	op_optimize(ssize_t pos_a, ssize_t pos_b)
{
	ssize_t	i;
	t_core	*core;

	core = core_instance();
	if (!core)
		return (0);
	i = 0;
	if ((pos_a <= (core->a->len / 2)) && (pos_b <= (core->b->len / 2)))
		while (i <= (pos_a - 1) && i <= (pos_b - 1))
			(rr(), i++);
	if ((pos_a > (core->a->len / 2)) && (pos_b > (core->b->len / 2)))
		while (i < (core->a->len - pos_a) && i < (core->b->len - pos_b))
			(rrr(), i++);
	return (i);
}
