/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_get_stdin.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:29:21 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/14 19:41:35 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

static t_instruction_fn	*resolve_function_from_input(char const *input)
{
	if (_strcmp("ra", input) == 0)
		return (&ra);
	if (_strcmp("rb", input) == 0)
		return (&rb);
	if (_strcmp("rr", input) == 0)
		return (&rr);
	if (_strcmp("pa", input) == 0)
		return (&pa);
	if (_strcmp("pb", input) == 0)
		return (&pb);
	if (_strcmp("rra", input) == 0)
		return (&rra);
	if (_strcmp("rrb", input) == 0)
		return (&rrb);
	if (_strcmp("rrr", input) == 0)
		return (&rrr);
	if (_strcmp("sa", input) == 0)
		return (&sa);
	if (_strcmp("sb", input) == 0)
		return (&sb);
	if (_strcmp("ss", input) == 0)
		return (&ss);
	return (0);
}

void	checker_get_stdin(void)
{
	t_checker	*checker;
	char		*input;
	char		**instructions;
	char		buf[65];
	int			read_size;

	checker = checker_instance();
	if (!checker)
		return ;
	read_size = read(0, buf, 64);
	input = osgc_calloc(1, 1);
	if (!input)
		return ;
	while (read_size > 0)
	{
		if (!input)
			return ;
		input = ft_join_and_free_s1(input, buf);
		read_size = read(0, buf, 64);
	}
	instructions = ft_split(input, '\n');
	while (*instructions)
		checker_register_instruction(
			resolve_function_from_input(*instructions++)
			);
}
