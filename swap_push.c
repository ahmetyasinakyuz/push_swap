/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyuz <akyuz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:57:51 by aakyuz            #+#    #+#             */
/*   Updated: 2024/12/02 23:09:40 by akyuz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	int	temp;

	if (stack->size_a > 1)
	{
		temp = stack->stack_a[0];
		stack->stack_a[0] = stack->stack_a[1];
		stack->stack_a[1] = temp;
	}
	ft_printf("sa\n");
}

void	sb(t_stack *stack)
{
	int	temp;

	if (stack->size_b > 1)
	{
		temp = stack->stack_b[0];
		stack->stack_b[0] = stack->stack_b[1];
		stack->stack_b[1] = temp;
	}
	ft_printf("sb\n");
}

void	ss(t_stack *stack)
{
	int	temp;

	if (stack->size_a > 1)
	{
		temp = stack->stack_a[0];
		stack->stack_a[0] = stack->stack_a[1];
		stack->stack_a[1] = temp;
	}
	temp = 0;
	if (stack->size_b > 1)
	{
		temp = stack->stack_b[0];
		stack->stack_b[0] = stack->stack_b[1];
		stack->stack_b[1] = temp;
	}
	ft_printf("ss\n");
}

void	pa(t_stack *stack)
{
	int	i;

	if (stack->size_b > 0)
	{
		i = stack->size_a;
		while (i > 0)
		{
			stack->stack_a[i] = stack->stack_a[i - 1];
			i--;
		}
		stack->stack_a[0] = stack->stack_b[0];
		i = 0;
		while (i < stack->size_b - 1)
		{
			stack->stack_b[i] = stack->stack_b[i + 1];
			i++;
		}
		stack->size_a++;
		stack->size_b--;
	}
	ft_printf("pa\n");
}

void	pb(t_stack *stack)
{
	int	i;

	if (stack->size_a > 0)
	{
		i = stack->size_b;
		while (i > 0)
		{
			stack->stack_b[i] = stack->stack_b[i - 1];
			i--;
		}
		stack->stack_b[0] = stack->stack_a[0];
		i = 0;
		while (i < stack->size_a - 1)
		{
			stack->stack_a[i] = stack->stack_a[i + 1];
			i++;
		}
		stack->size_a--;
		stack->size_b++;
	}
	ft_printf("pb\n");
}
