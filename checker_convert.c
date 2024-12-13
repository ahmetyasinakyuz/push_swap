/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_convert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 03:37:27 by aakyuz            #+#    #+#             */
/*   Updated: 2024/12/04 05:57:09 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	*ft_allocate_and_convert_bonus(char **arg, int size)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * size);
	if (!arr)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	i = 0;
	while (i < size)
	{
		arr[i] = ft_atoi_max_bonus(arg[i]);
		i++;
	}
	return (arr);
}

void	ft_check_duplicates_bonus(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
			{
				free(arr);
				write(2, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

int	*ft_num_ar_bonus(char **arg)
{
	int	size;
	int	*arr;

	size = 0;
	while (arg[size])
		size++;
	arr = ft_allocate_and_convert_bonus(arg, size);
	ft_check_duplicates_bonus(arr, size);
	return (arr);
}

void	ft_creat_stack_bonus(t_stack *stack)
{
	stack->stack_b = (int *)malloc(sizeof(int) * stack->size_a);
	stack->cost = 0;
	stack->size_b = 0;
}
