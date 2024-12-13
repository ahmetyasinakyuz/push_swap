/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_rot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 03:34:02 by aakyuz            #+#    #+#             */
/*   Updated: 2024/12/04 03:34:24 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_rra_bonus(t_stack *stack)
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
}

void	ft_rrb_bonus(t_stack *stack)
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
}

void	ft_rrr_bonus(t_stack *stack)
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
}

void	ft_ra_bonus(t_stack *stack)
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
}

void	ft_rb_bonus(t_stack *stack)
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
}
