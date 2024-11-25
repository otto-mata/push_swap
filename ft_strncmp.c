/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:01:51 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/25 13:17:02 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

static size_t	ft_max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	n = ft_min(n, ft_max(ft_strlen(s1), ft_strlen(s2)));
	return (ft_memcmp(s1, s2, n));
}
