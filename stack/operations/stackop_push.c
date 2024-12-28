/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackop_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:58:06 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/28 09:02:31 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	*stackop_push(t_stack *from, t_stack *to)
{
	if (!from || !to || from->sz == 0 || from->len == 0)
		return (from);
	to->len++;
	stackop_shift_down(to);
	to->content[0] = from->content[0];
	stackop_shift_up(from);
	from->len--;
	return (to);
}
