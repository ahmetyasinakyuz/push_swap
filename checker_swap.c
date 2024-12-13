/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 03:32:48 by aakyuz            #+#    #+#             */
/*   Updated: 2024/12/04 03:33:28 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_sa_bonus(t_stack *stack)
{
	int	temp;

	if (stack->size_a > 1)
	{
		temp = stack->stack_a[0];
		stack->stack_a[0] = stack->stack_a[1];
		stack->stack_a[1] = temp;
	}
}

void	ft_sb_bonus(t_stack *stack)
{
	int	temp;

	if (stack->size_b > 1)
	{
		temp = stack->stack_b[0];
		stack->stack_b[0] = stack->stack_b[1];
		stack->stack_b[1] = temp;
	}
}

void	ft_ss_bonus(t_stack *stack)
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
}

void	ft_pa_bonus(t_stack *stack)
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
}

void	ft_pb_bonus(t_stack *stack)
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
}
