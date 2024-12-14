/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:38:03 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/14 20:25:45 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H
# include "../push_swap.h"

typedef struct s_checker	t_checker;
typedef						int(t_instruction_fn)(void);

struct						s_checker
{
	t_instruction_fn		**instructions;
	size_t					instruction_count;
};

t_checker					*checker_instance(void);
void						checker_get_stdin(void);
int							checker_register_instruction(t_instruction_fn *fn);
void						checker_apply(void);

char						*ft_join_and_free_s1(char *s1, char *s2);
int							_strcmp(char const *s1, char const *s2);

void						core_enable_check_mode(void);
void						core_enable_debug_mode(void);
bool						core_debug(void);
#endif