/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackop_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:58:06 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/22 10:33:16 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*stackop_push(t_stack **from, t_stack **to)
{
	if ((*from)->sz == 0 || (*from)->len == 0)
		return ((*from));
	printf("to sz: %zu\n", (*to)->sz * sizeof(int));
	(*to)->content = osgc_realloc((*to)->content, (*to)->sz * sizeof(int),
			((*to)->sz + 1) * sizeof(int));
	if (!(*to))
		return (0);
	(*to)->sz += 1;
	(*to)->len += 1;
	stackop_shift_down((*to));
	(*to)->content[0] = (*from)->content[0];
	stackop_shift_up((*from));
	(*from)->len -= 1;
	(*from)->content = osgc_realloc((*from)->content, (*from)->sz * sizeof(int),
			((*from)->sz - 1) * sizeof(int));
	if (!(*from))
		return (0);
	return (*to);
}
