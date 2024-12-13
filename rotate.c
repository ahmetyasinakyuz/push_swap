/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:18:06 by aakyuz            #+#    #+#             */
/*   Updated: 2024/12/04 14:57:52 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack)
{
	int	temp;
	int	i;

	if (stack->size_a > 1)
	{
		temp = stack->stack_a[0];
		i = 0;
		while (i < stack->size_a - 1)
		{
			stack->stack_a[i] = stack->stack_a[i + 1];
			i++;
		}
		stack->stack_a[stack->size_a - 1] = temp;
	}
	ft_printf("ra\n");
}

void	rb(t_stack *stack)
{
	int	temp;
	int	i;

	if (stack->size_b > 1)
	{
		temp = stack->stack_b[0];
		i = 0;
		while (i < stack->size_b - 1)
		{
			stack->stack_b[i] = stack->stack_b[i + 1];
			i++;
		}
		stack->stack_b[stack->size_b - 1] = temp;
	}
	ft_printf("rb\n");
}

void	rr(t_stack *stack)
{
	int	temp;
	int	i;

	if (stack->size_a > 1)
	{
		temp = stack->stack_a[0];
		i = -1;
		while (++i < stack->size_a - 1)
			stack->stack_a[i] = stack->stack_a[i + 1];
		stack->stack_a[stack->size_a - 1] = temp;
	}
	temp = 0;
	i = 0;
	if (stack->size_b > 1)
	{
		temp = stack->stack_b[0];
		i = -1;
		while (++i < stack->size_b - 1)
			stack->stack_b[i] = stack->stack_b[i + 1];
		stack->stack_b[stack->size_b - 1] = temp;
	}
	ft_printf("rr\n");
}

void	error_a(t_stack *stack)
{
	stack_free(stack);
	write(2, "Error\n", 6);
	exit(1);
}
