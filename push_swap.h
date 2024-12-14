/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:50:46 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/14 21:10:53 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "osgc/osgc.h"
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_core	t_core;
typedef struct s_stack	t_stack;
typedef struct s_args	t_args;
typedef					void(t_handler_fn)(void);
typedef char const		*t_stringc;
struct					s_stack
{
	ssize_t				sz;
	ssize_t				len;
	int					*content;
	ssize_t				mid;
	int					q1;
	int					q3;
	int					bottom_value;
};

struct					s_core
{
	t_stack				*a;
	t_stack				*b;
	t_stack				*ref;
	int					a_sorted;
	int					b_empty;
	int					op_count;
	bool				check_mode;
	bool				debug_mode;
	int					argc;
};

struct					s_args
{
	int					count;
	int					error;
	int					*clean;
	bool				must_clean_args;
	char				**args;
	t_handler_fn		**validators;
};

void					ft_swap(int *a, int *b);
int						ft_atoi(char const *nptr);
size_t					ft_strlen(char const *s);
char					**ft_split(char const *s, char c);
int						ft_isalpha(int c);
char					*ft_strdup(char const *s);
char					*ft_strjoin(char const *s1, char const *s2);
int						ft_nb_length(int nb);
void					ft_quick_sort(int array[], int low, int high);
void					ft_putendl(char *str);
void					ft_putstr(char *str);
void					ft_putchar(char c);

void					*stackop_swap(t_stack *stack);
void					*stackop_shift_up(t_stack *stack);
void					*stackop_shift_down(t_stack *stack);
void					*stackop_push(t_stack *from, t_stack *to);
t_stack					*stack_init(int sz, int *args);
t_stack					*stack_reserve(int sz);
int						stack_is_sorted(t_stack *stack);
int						stack_value_at(t_stack *stack, ssize_t index);
t_stack					*stack_init_ref(int sz, int *args);
void					stack_set_quartiles(t_stack *stack);
bool					stack_inner(t_stack *stack);
int						stack_first(t_stack *stack);
void					stack_sort_three_a(void);
ssize_t					stack_index_of(t_stack *stack, int n);
int						stack_min(t_stack *stack);
int						stack_max(t_stack *stack);
int						stack_get_target_place(t_stack *stack, int n);
void					stack_replace_a(void);
void					stack_sort(void);
void					stack_sort_a(void);
void					stack_sort_b(void);
void					stack_print(t_stack *stack, char const *name);

t_core					*core_instance(void);
int						core_init(void);
int						core_init_ref(void);
int						core_can_start(void);
int						core_get_ref_q1(void);
int						core_get_ref_q3(void);
int						core_get_ref_mid(void);

t_args					*args_instance(void);
int						args_prepare(t_stringc arg);
int						args_register_handler(t_handler_fn *fn);
int						args_validate(void);
void					args_use_argv(t_stringc *argv);
void					args_destroy(void);

void					validator_all_atoi_safe(void);
void					validator_all_int32(void);
void					validator_all_uniq(void);

void					transformer_atoi(void);

int						op_cost(int n);
int						op_get_best(void);
int						op_optimize(ssize_t pos_a, ssize_t pos_b);
void					op_insertion_sort(int move);

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
