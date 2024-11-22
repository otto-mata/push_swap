/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackop_pushi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 09:02:07 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/22 09:03:52 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stackop_pushi(int val, t_stack **to)
{
	(*to)->content = osgc_realloc((*to)->content, (*to)->sz * sizeof(int),
			((*to)->sz + 1) * sizeof(int));
	if (!(*to))
		return (0);
	(*to)->sz += 1;
	stackop_shift_down((*to));
	(*to)->content[0] = val;
	(*to)->len += 1;
	return (1);
}
