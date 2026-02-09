/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 23:27:19 by aneves             #+#    #+#             */
/*   Updated: 2026/02/09 23:27:20 by aneves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static long ft_atol(const char *s)
{
    long result;
    int sign;
    int i;

    result = 0;
    sign = 1;
    i = 0;
    while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || \
            s[i] == '\r' || s[i] == '\f' || s[i] == '\v')
        i++;
    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign = -1;
        i++;
    }
    while (ft_isdigit(s[i]))
        result = result * 10 + (s[i++] - '0');
    return (result * sign);
}

static void append_node(t_stack_node **stack, int n)
{
    t_stack_node    *node;
    t_stack_node    *last_node;

    if (!stack)
        return ;
    node = malloc(sizeof(t_stack_node));
    if (!node)
        return ;
    node ->next = NULL;
    node ->nbr = n;
    node->cheapest = 0;
    if (!(*stack))
    {
        *stack = node;
        node ->prev = NULL;
    }
    else
    {
        last_node = find_last(*stack);
        last_node->next = node;
        node->prev = last_node;
    }
}

void    init_stack_a(t_stack_node **a, char **argv)
{
    long    n;
    int     i;

    i = 0;
    while (argv[i])
    {
        if (error_syntax(argv[i]))
            free_errors(a);
        n = ft_atol(argv[i]);
        if (n > INT_MAX || n < INT_MIN)
            free_errors(a);
        if (error_duplicate(*a, (int)n))
            free_errors(a);
        append_node(a, (int)n);
        i++;
    }
}

t_stack_node    *get_cheapest(t_stack_node *stack)
{
    if (!stack)
        return (NULL);
    while (stack)
    {
        if (stack->cheapest)
            return (stack);
        stack = stack-> next;
    }
    return (NULL);
}

void    prep_for_push(t_stack_node **stack, t_stack_node *top_node, char stack_name)
{
    while (*stack != top_node)
    {
        if (stack_name == 'a')
        {
            if (top_node->above_median)
                ra(stack, false);
            else
                rra(stack, false);
        }
        else if (stack_name == 'b')
        {
            if (top_node->above_median)
                rb(stack, false);
            else
                rrb(stack, false);
        }
    }
}