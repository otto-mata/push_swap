/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:50:46 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/25 14:09:18 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "osgc/osgc.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_core	t_core;
typedef struct s_stack	t_stack;
typedef struct s_args	t_args;
typedef					void(t_handler_fn)(void);
typedef char const		*t_stringc;
struct					s_stack
{
	unsigned long		sz;
	unsigned long		len;
	int					*content;
};

struct					s_core
{
	t_stack				*a;
	t_stack				*b;
	char				*operations;
	int					a_sorted;
	int					b_empty;
	int					op_count;
};

struct					s_args
{
	int					count;
	int					error;
	int					*clean;
	char				**args;
	t_handler_fn		**validators;
};

void					ft_swap(int *a, int *b);
int						ft_atoi(char const *nptr);
size_t					ft_strlen(char const *s);
char					*ft_strjoin(char const *s1, char const *s2);
char					**ft_split(char const *s, char c);
int						ft_isalpha(int c);
char					*ft_strtrim(char const *s, char const *set);
char					*ft_strmapi(char const *s, char (*f)(unsigned int,
								char));
char					*ft_strdup(char const *s);
int						ft_strncmp(char const *s1, char const *s2, size_t n);
int						ft_memcmp(void const *m1, void const *m2, size_t sz);

void					*stackop_swap(t_stack *stack);
void					*stackop_shift_up(t_stack *stack);
void					*stackop_shift_down(t_stack *stack);
void					*stackop_push(t_stack *from, t_stack *to);
int						stackop_pushi(int val, t_stack **to);
int						stackop_popi(t_stack **from, int *ret);
t_stack					*stack_init(int sz, int *args);
t_stack					*stack_reserve(int sz);
int						stack_is_sorted(t_stack *stack);

t_core					*core_instance(void);
void					core_register_command(char *cmd);
int						core_init(void);
int						core_can_start(void);

t_args					*args_instance(void);
int						args_prepare(t_stringc arg);
int						args_register_handler(t_handler_fn *fn);
int						args_validate(void);
void					args_use_argv(t_stringc *argv);

void					validator_all_atoi_safe(void);
void					validator_all_int32(void);
void					validator_all_uniq(void);

void					transformer_atoi(void);

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
