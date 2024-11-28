/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:22:12 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/25 19:22:57 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_pow(int a, int n)
{
	long	ans;
	int		last_bit;

	ans = 1;
	while (n > 0)
	{
		last_bit = (n & 1);
		if (last_bit)
		{
			ans = ans * a;
		}
		a = a * a;
		n = n >> 1;
	}
	return (ans);
}
