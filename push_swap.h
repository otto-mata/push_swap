/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:50:46 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/20 16:56:32 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "osgc/osgc.h"
# include <stdlib.h>

struct					s_stack
{
	unsigned long		sz;
	unsigned long		len;
	int					*content;
};

typedef struct s_stack	t_stack;

int						ft_atoi(char const *nptr);
void					*stackop_swap(t_stack *stack);
void					*stackop_shift_up(t_stack *stack);
void					*stackop_shift_down(t_stack *stack);
void					*stackop_push(t_stack **from, t_stack **to);

#endif