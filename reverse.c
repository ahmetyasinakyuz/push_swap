/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:36:28 by aakyuz            #+#    #+#             */
/*   Updated: 2024/12/04 06:23:35 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack)
{
	int	temp;
	int	i;

	if (stack->size_a > 1)
	{
		temp = stack->stack_a[stack->size_a - 1];
		i = stack->size_a - 1;
		while (i > 0)
		{
			stack->stack_a[i] = stack->stack_a[i - 1];
			i--;
		}
		stack->stack_a[0] = temp;
	}
	ft_printf("rra\n");
}

void	rrb(t_stack *stack)
{
	int	temp;
	int	i;

	if (stack->size_b > 1)
	{
		temp = stack->stack_b[stack->size_b - 1];
		i = stack->size_b - 1;
		while (i > 0)
		{
			stack->stack_b[i] = stack->stack_b[i - 1];
			i--;
		}
		stack->stack_b[0] = temp;
	}
	ft_printf("rrb\n");
}

void	rrr(t_stack *stack)
{
	int	temp;
	int	i;

	if (stack->size_a > 1)
	{
		temp = stack->stack_a[stack->size_a - 1];
		i = stack->size_a;
		while (--i > 0)
			stack->stack_a[i] = stack->stack_a[i - 1];
		stack->stack_a[0] = temp;
	}
	i = 0;
	temp = 0;
	if (stack->size_b > 1)
	{
		temp = stack->stack_b[stack->size_b - 1];
		i = stack->size_b;
		while (--i > 0)
			stack->stack_b[i] = stack->stack_b[i - 1];
		stack->stack_b[0] = temp;
	}
	ft_printf("rrr\n");
}

int	has_greater_value_in_a(t_stack *stack, int i)
{
	int	j;

	j = 0;
	while (j < stack->size_a)
	{
		if (stack->stack_a[j] > stack->stack_b[i])
			return (1);
		j++;
	}
	return (0);
}
