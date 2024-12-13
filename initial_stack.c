/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:37:00 by aakyuz            #+#    #+#             */
/*   Updated: 2024/12/04 06:22:46 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	creat_stack(t_stack *stack)
{
	stack->stack_b = (int *)malloc(sizeof(int) * stack->size_a);
	stack->cost = 0;
	stack->size_b = 0;
}

void	is_sorted(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size_a)
	{
		j = i;
		while (j < stack->size_a - 1)
		{
			if (stack->stack_a[j] > stack->stack_a[j + 1])
			{
				return ;
			}
			j++;
		}
		i++;
	}
	stack_free(stack);
	exit(1);
}

int	is_sorted_a(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size_a)
	{
		j = i;
		while (j < stack->size_a - 1)
		{
			if (stack->stack_a[j] > stack->stack_a[j + 1])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	sort_2(t_stack *stack)
{
	sa(stack);
}

void	sort_3(t_stack *stack)
{
	int	a;
	int	b;
	int	c;

	a = stack->stack_a[0];
	b = stack->stack_a[1];
	c = stack->stack_a[2];
	if (a > b && b > c)
	{
		sa(stack);
		rra(stack);
	}
	else if (a > c && b < c)
		ra(stack);
	else if (b > a && a > c)
		rra(stack);
	else if (b > c && c > a)
	{
		sa(stack);
		ra(stack);
	}
	else if (c > a && a > b)
		sa(stack);
}
