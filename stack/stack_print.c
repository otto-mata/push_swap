/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:21:16 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/28 19:08:20 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_print(t_stack *stack, char const *name)
{
	unsigned long	i;

	printf("STACK [%s] INFO:\n", name);
	printf("%-10s > %lu\n", "n_elems", stack->len);
	printf("%-10s > %lu\n", "total_sz", stack->sz);
	printf("%-10s > %d\n", "q1", stack->q1);
	printf("%-10s > %lu\n", "mid", stack->mid);
	printf("%-10s > %d\n", "q3", stack->q3);
	printf("STACK [%s] CONTENT:\n", name);
	i = -1;
	if (stack->len == 0)
		printf("%10s\n", "NO CONTENT");
	while (++i < stack->len)
		printf("%-10s [%lu] = %d\n", "", i, stack->content[i]);
}
