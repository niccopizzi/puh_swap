/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npizzi <npizzi@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:06:23 by npizzi            #+#    #+#             */
/*   Updated: 2024/10/28 11:15:14 by npizzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHECKER_H
#define _CHECKER_H

#include "../push_swap.h"
#include "./get_next_line/get_next_line.h"

void free_all_and_exit(char *instruction, t_stack **stack_a, t_stack **stack_b);
bool check_if_correct(t_stack **stack_a, t_stack **stack_b, int total_moves);
int check_instruction(char *instruction, t_stack **stack_a, t_stack **stack_b);
void check_for_segfault(int instruction_number, char *instruction, t_stack **stack_a, t_stack **stack_b);
void execute_instruction(int instruction_number, t_stack **stack_a, t_stack **stack_b);

#endif