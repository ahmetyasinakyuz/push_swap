/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 03:38:25 by aakyuz            #+#    #+#             */
/*   Updated: 2024/12/04 03:38:46 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_is_sorted_a_bonus(t_stack *stack)
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
