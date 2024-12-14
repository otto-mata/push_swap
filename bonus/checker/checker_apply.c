/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_apply.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:07:00 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/14 21:18:42 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

static void	ft_putnbr(int n)
{
	char	c;

	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n < 10)
	{
		c = n + '0';
		ft_putchar(c);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

static int	nblen(int32_t n)
{
	int	sz;

	sz = 0;
	if (n <= 0)
		sz++;
	while (n)
	{
		sz++;
		n /= 10;
	}
	return (sz);
}

static int	column(t_stack *stack, int index, char id)
{
	int	nb_sz;
	int	nb;
	int	i;

	nb = stack->content[index];
	if (id == 'b' && index >= stack->len)
		nb = 0;
	nb_sz = nblen(nb);
	if ((nb == stack->bottom_value && id == 'a') || (nb == 0 && id == 'b'
			&& index < stack->len))
		ft_putstr("|     * ");
	else
		ft_putstr("|       ");
	ft_putnbr(nb);
	i = 0xb - nb_sz;
	while (i)
	{
		ft_putchar(0x20);
		i--;
	}
	if (id == 'b')
		ft_putendl("|");
	return (index);
}

static void	visual(void)
{
	t_core	*core;
	int		i;

	core = core_instance();
	if (!core)
		return ;
	i = 0;
	ft_putendl(" __________________ __________________ ");
	ft_putendl("|                  |                  |");
	ft_putendl("|       a          |       b          |");
	ft_putendl("|__________________|__________________|");
	ft_putendl("|                  |                  |");
	while (i < core->argc)
	{
		column(core->a, i, 'a');
		column(core->b, i, 'b');
		i++;
	}
	ft_putendl("|__________________|__________________|\n");
}

void	checker_apply(void)
{
	t_checker	*checker;
	t_core		*core;
	int			i;

	checker = checker_instance();
	core = core_instance();
	if (!checker || !core)
		return ;
	i = 0;
	if (core->debug_mode)
		visual();
	while (checker->instructions && checker->instructions[i])
	{
		checker->instructions[i++]();
		if (core->debug_mode)
			visual();
	}
}
