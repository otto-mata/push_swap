/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackop_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:58:06 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/28 19:12:08 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	*stackop_push(t_stack *from, t_stack *to)
{
	if (from->sz == 0 || from->len == 0)
		return (from);
	to->len++;
	if (to->sz < to->len * 2)
	{
		to->content = osgc_realloc(to->content, to->sz * sizeof(int), (to->len
					* 2) * sizeof(int));
		if (!to->content)
			return (0);
		to->sz = to->len * 2;
	}
	stackop_shift_down(to);
	to->content[0] = from->content[0];
	stackop_shift_up(from);
	from->len--;
	return (to);
}
