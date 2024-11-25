/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:21:43 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/25 14:10:27 by tblochet         ###   ########.fr       */
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
	if (argc == 1)
		return (0);
	if (argc == 2)
		args_prepare(argv[1]);
	else
		args_use_argv(argv + 1);
	args_register_handler(&validator_all_atoi_safe);
	args_register_handler(&validator_all_int32);
	args_register_handler(&transformer_atoi);
	args_register_handler(&validator_all_uniq);
	if (!args_validate())
		write(2, "Error.\n", ft_strlen("Error.\n"));
	core_init();
	if (core_can_start())
		write(1, "Exec", 4);
	osgc_clear();
	return (0);
}
