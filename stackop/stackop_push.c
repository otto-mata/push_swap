/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackop_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:58:06 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/19 21:21:27 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stackop.h"

void	*stackop_push(t_stack *from, t_stack *to)
{
	if (from->sz == 0)
		return (from);
	if (!osgc_realloc(to->content, to->sz, to->sz + 1))
		return (0);
	to->sz += 1;
	stackop_shift_down(to);
	to->content[0] = from->content[0];
	to->len += 1;
	return (to);
}
