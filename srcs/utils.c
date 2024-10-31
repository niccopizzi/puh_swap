/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npizzi <npizzi@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:36:04 by npizzi            #+#    #+#             */
/*   Updated: 2024/10/23 10:35:57 by npizzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack *find_max(t_stack *stack)
{
    t_stack *max;
    t_stack *ptr;

    if (stack == NULL)
        return (0);
    ptr = stack;
    max = ptr;
    while (ptr != NULL)
    {
        if (ptr->value > max->value)
            max = ptr;
        ptr = ptr->next;
    }
    return (max);
}

t_stack *find_min(t_stack *stack)
{
    t_stack *min;
    t_stack *ptr;

    if (stack == NULL)
        return (0);
    ptr = stack;
    min = ptr;
    while (ptr != NULL)
    {
        if (ptr->value < min->value)
            min = ptr;
        ptr = ptr->next;
    }
    return (min);
}

int stack_size(t_stack *stack)
{
    int size;
    t_stack *ptr;

    size = 0;
    ptr = stack;
    while (ptr != NULL)
    {
        size++;
        ptr = ptr->next;
    }
    return (size);
}
