/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackop_popi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 08:58:13 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/22 09:02:15 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stackop_popi(t_stack **from, int	*ret)
{
	if ((*from)->sz == 0 || (*from)->len == 0)
		return (0);
	*ret = (*from)->content[0];
	stackop_shift_up((*from));
	(*from)->content = osgc_realloc((*from)->content, (*from)->sz * sizeof(int),
			((*from)->sz - 1) * sizeof(int));
	if (!(*from))
		return (0);
	(*from)->len -= 1;
	return (1);
}