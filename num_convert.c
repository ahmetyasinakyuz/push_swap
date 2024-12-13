/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_convert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:57:02 by aakyuz            #+#    #+#             */
/*   Updated: 2024/12/04 14:32:45 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_duplicates(int *arr, int size)
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

int	*allocate_and_convert(char **arg, int size, t_stack *stack)
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
		arr[i] = atoi_max(arg[i], stack, arr);
		i++;
	}
	return (arr);
}

int	*num_ar(char **arg, t_stack *stack)
{
	int	size;
	int	*arr;

	size = 0;
	while (arg[size])
		size++;
	arr = allocate_and_convert(arg, size, stack);
	check_duplicates(arr, size);
	return (arr);
}
