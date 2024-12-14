/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:38:03 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/14 17:38:11 by tblochet         ###   ########.fr       */
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
void						core_enable_check_mode(void);
#endif