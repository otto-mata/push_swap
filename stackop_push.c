/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackop_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:58:06 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/21 18:56:08 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*stackop_push(t_stack **from, t_stack **to)
{
	if ((*from)->sz == 0)
		return ((*from));
	(*to)->content = osgc_realloc((*to)->content, (*to)->sz * sizeof(int),
			((*to)->sz + 1) * sizeof(int));
	if (!(*to))
		return (0);
	(*to)->sz += 1;
	stackop_shift_down((*to));
	(*to)->content[0] = (*from)->content[0];
	(*to)->len += 1;
	stackop_shift_up((*from));
	(*from)->content = osgc_realloc((*from)->content, (*from)->sz * sizeof(int),
			((*from)->sz - 1) * sizeof(int));
	if (!(*from))
		return (0);
	(*from)->len -= 1;
	return (*to);
}
