/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:26:37 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/28 08:58:22 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_partition(int array[], int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	if (!array)
		return (-1);
	pivot = array[high];
	i = (low - 1);
	j = low;
	while (j < high)
	{
		if (array[j] <= pivot)
		{
			i++;
			ft_swap(&array[i], &array[j]);
		}
		j++;
	}
	ft_swap(&array[i + 1], &array[high]);
	return (i + 1);
}

void	ft_quick_sort(int array[], int low, int high)
{
	int	pivot;

	if (low < high)
	{
		pivot = ft_partition(array, low, high);
		ft_quick_sort(array, low, pivot - 1);
		ft_quick_sort(array, pivot + 1, high);
	}
}
