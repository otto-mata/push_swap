/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_get_stdin.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:29:21 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/14 17:55:33 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"
#include <fcntl.h>

static char	*ft_join_and_free_s1(char *s1, char *s2)
{
	char	*temp;

	if (!s1 || !s2)
		return (0);
	temp = ft_strjoin(s1, s2);
	osgc_free(s1);
	return (temp);
}

static int	_strcmp(char const *s1, char const *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

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
	int fd = open("/tmp/test.txt", O_RDONLY);
	read_size = read(fd, buf, 64);
	input = osgc_calloc(1, 1);
	if (!input)
		return ;
	while (read_size > 0)
	{
		if (!input)
			return ;
		input = ft_join_and_free_s1(input, buf);
		read_size = read(fd, buf, 64);
	}
	instructions = ft_split(input, '\n');
	while (*instructions)
		checker_register_instruction(
			resolve_function_from_input(*instructions++)
			);
}
