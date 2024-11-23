/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:21:43 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/23 19:26:12 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_print(t_stack *stack, char const *name)
{
	unsigned long	i;

	printf("STACK [%s] INFO:\n", name);
	printf("%-10s > %lu\n", "n_elems", stack->len);
	printf("%-10s > %lu\n", "total_sz", stack->sz);
	printf("STACK [%s] CONTENT:\n", name);
	i = -1;
	if (stack->len == 0)
		printf("%10s\n", "NO CONTENT");
	while (++i < stack->len)
		printf("%-10s [%lu] = %d\n", "", i, stack->content[i]);
}

int	main(int argc, char const *argv[])
{
	t_core	*core;

	core_init(argc - 1, (char **)&argv[1]);
	pb();
	rb();
	pb();
	rb();
	pb();
	sa();
	pa();
	pa();
	pa();
	core = core_instance();
	printf("%s", core->operations);
	osgc_clear();
	return (0);
}
