/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:50:46 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/19 21:15:39 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "osgc/osgc.h"
# include <stdlib.h>

int						ft_atoi(char const *nptr);

struct					s_stack
{
	unsigned long		sz;
	unsigned long		len;
	int					*content;
};

typedef struct s_stack	t_stack;
#endif