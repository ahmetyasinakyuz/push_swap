/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:41:02 by aakyuz            #+#    #+#             */
/*   Updated: 2024/12/02 14:58:31 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cost_a(t_stack *stack, int index, t_moves *moves)
{
	if ((index + 1) <= (stack->size_a / 2) + 1)
		moves->ra = index;
	else
		moves->rra = stack->size_a - index;
}

void	cost_b(t_stack *stack, int index, t_moves *moves)
{
	if ((index + 1) <= (stack->size_b / 2) + 1)
		moves->rb = index;
	else
		moves->rrb = stack->size_b - index;
}

void	dub_cost(t_moves *moves)
{
	if (moves->ra > moves->rb)
	{
		moves->rr = moves->rb;
		moves->ra = moves->ra - moves->rb;
		moves->rb = 0;
	}
	else if (moves->ra <= moves->rb)
	{
		moves->rr = moves->ra;
		moves->rb = moves->rb - moves->ra;
		moves->ra = 0;
	}
	if (moves->rra > moves->rrb)
	{
		moves->rrr = moves->rrb;
		moves->rra = moves->rra - moves->rrb;
		moves->rrb = 0;
	}
	else if (moves->rra <= moves->rrb)
	{
		moves->rrr = moves->rra;
		moves->rrb = moves->rrb - moves->rra;
		moves->rra = 0;
	}
}
