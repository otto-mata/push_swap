/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_get_stdin.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:29:21 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/27 21:13:31 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

static t_instruction_fn	*addr_of(char const *input)
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

bool	checker_get_stdin(void)
{
	t_checker	*checker;
	char		*input;
	char		**instructions;
	char		buf[65];
	int			read_size;

	checker = checker_instance();
	if (!checker)
		return (false);
	otto_bzero(buf, 65);
	read_size = read(0, buf, 64);
	input = osgc_calloc(2, 1);
	while (read_size > 0)
	{
		if (!input)
			return (false);
		input = ft_join_and_free_s1(input, buf);
		read_size = read(0, buf, 64);
	}
	instructions = ft_split(input, '\n');
	while (instructions && *instructions)
		if (!checker_register_instruction(addr_of(*instructions++)))
			return (false);
	return (true);
}
