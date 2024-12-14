/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_register_instruction.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 14:31:37 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/14 14:35:22 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

int	checker_register_instruction(t_instruction_fn *fn)
{
	t_checker	*checker;
	int			i;

	checker = checker_instance();
	i = 0;
	if (!checker)
		return (0);
	while (checker->instructions && checker->instructions[i])
		i++;
	checker->instructions = osgc_realloc(checker->instructions, i
			* sizeof(void *), (i + 2) * sizeof(void *));
	if (!checker->instructions)
		return (0);
	checker->instructions[i] = fn;
	checker->instructions[i + 1] = 0;
	return (1);
}
