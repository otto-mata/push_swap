/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:21:43 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/20 16:56:19 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_reserve(int sz)
{
	t_stack	*stck;

	stck = osgc_malloc(sizeof(t_stack));
	if (!stck)
		return (0);
	stck->sz = sz;
	stck->content = osgc_malloc(sz * sizeof(int));
	stck->len = 0;
	if (!stck->content)
		return (0);
	return (stck);
}

t_stack	*stack_init(int sz, char **raw)
{
	t_stack	*stck;
	int		i;

	stck = stack_reserve(sz);
	if (!stck)
		return (0);
	i = 0;
	while (i < sz)
	{
		stck->content[i] = ft_atoi(raw[i]);
		i++;
	}
	stck->len = i;
	return (stck);
}

int	main(int argc, char const *argv[])
{
	t_stack	*a;
	t_stack	*b;

	a = stack_init(argc - 1, (char **)&argv[1]);
	b = stack_reserve(argc - 1);
	stackop_push(&a, &b);
	osgc_clear();
	return (0);
}
