/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 19:41:14 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/16 12:54:10 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

void	ft_putnbr(int n)
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

int	nblen(int32_t n)
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

char	*ft_join_and_free_s1(char *s1, char *s2)
{
	char	*temp;

	if (!s1 || !s2)
		return (0);
	temp = ft_strjoin(s1, s2);
	osgc_free(s1);
	return (temp);
}

int	_strcmp(char const *s1, char const *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
