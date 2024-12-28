/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_apply.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:07:00 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/28 09:04:27 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

static void	col1(int value, bool special)
{
	int	padding;

	if (special)
		ft_putstr("|     * ");
	else
		ft_putstr("|       ");
	ft_putnbr(value);
	padding = 11 - nblen(value);
	while (padding--)
		ft_putchar(' ');
}

static void	column(t_stack *a, t_stack *b)
{
	int	offset_a;
	int	offset_b;
	int	i;

	offset_a = a->sz - a->len;
	offset_b = b->sz - b->len;
	i = 0;
	while (i < a->sz)
	{
		if (i < offset_a)
			ft_putstr("|       0          ");
		else
			col1(a->content[i - offset_a], a->content[i
				- offset_a] == a->bottom_value);
		if (i < offset_b)
			ft_putstr("|       0          ");
		else
			col1(b->content[i - offset_b], b->content[i
				- offset_b] == a->min);
		ft_putendl("|");
		i++;
	}
}

static void	visual(void)
{
	t_core	*core;

	core = core_instance();
	if (!core)
		return ;
	ft_putendl(" __________________ __________________ ");
	ft_putendl("|                  |                  |");
	ft_putendl("|       a          |       b          |");
	ft_putendl("|__________________|__________________|");
	ft_putendl("|                  |                  |");
	column(core->a, core->b);
	ft_putendl("|__________________|__________________|\n");
}

bool	checker_apply(void)
{
	t_checker	*checker;
	t_core		*core;
	int			i;

	checker = checker_instance();
	core = core_instance();
	if (!checker || !checker->instructions || !core || !core->a || !core->b)
		return (false);
	i = 0;
	if (core->debug_mode)
		visual();
	while (checker->instructions && checker->instructions[i])
	{
		checker->instructions[i++]();
		if (core->debug_mode)
			visual();
	}
	return (stack_is_sorted(core->a) && core->b->len == 0);
}
