/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:25:22 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/14 17:36:12 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1sz;
	size_t	sz;
	char	*s;
	size_t	i;

	if (!s1 || !s2)
		return (0);
	s1sz = ft_strlen(s1);
	sz = s1sz + ft_strlen(s2) + 1;
	s = osgc_calloc(sz, sizeof(char));
	if (!s)
		return (0);
	i = 0;
	while (i < s1sz)
	{
		s[i] = s1[i];
		i++;
	}
	while (i < sz)
	{
		s[i] = s2[i - s1sz];
		i++;
	}
	return (s);
}
