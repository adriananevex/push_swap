/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 23:25:44 by aneves             #+#    #+#             */
/*   Updated: 2026/02/09 23:25:44 by aneves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void  sort_three(t_stack_node **a)
{
  t_stack_node  *biggest_node;

  biggest_node = find_max(*a);
  if (biggest_node == *a)
    ra(a, false);
  else if ((*a)->next == biggest_node)
    rra(a, false);
  if ((*a)->nbr > (*a)->next->nbr)
    sa(a, false);
}
