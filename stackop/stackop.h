/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackop.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:52:51 by tblochet          #+#    #+#             */
/*   Updated: 2024/11/19 21:18:50 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACKOP_H
# define STACKOP_H
# include "../push_swap.h"
void	*stackop_shift_down(t_stack *stack);
void	*stackop_swap(t_stack *stack);
#endif