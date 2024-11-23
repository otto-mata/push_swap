/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:50:46 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/23 17:15:05 by tblochet         ###   ########.fr       */
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

struct					s_core
{
	t_stack				*a;
	t_stack				*b;
	int					a_sorted;
	int					b_empty;
	int					op_count;
};

typedef struct s_core	t_core;

void					ft_swap(int *a, int *b);
int						ft_atoi(char const *nptr);
void					*stackop_swap(t_stack *stack);
void					*stackop_shift_up(t_stack *stack);
void					*stackop_shift_down(t_stack *stack);
void					*stackop_push(t_stack *from, t_stack *to);
int						stackop_pushi(int val, t_stack **to);
int						stackop_popi(t_stack **from, int *ret);
t_stack					*stack_init(int sz, char **raw);
t_stack					*stack_reserve(int sz);
t_core					*core_instance(void);
int						core_init(int sz, char **raw_content);

int						stack_is_sorted(t_stack *stack);

int						pa(void);
int						pb(void);
int						sa(void);
int						sb(void);
int						ss(void);
int						ra(void);
int						rb(void);
int						rr(void);
int						rra(void);
int						rrb(void);
int						rrr(void);
#endif