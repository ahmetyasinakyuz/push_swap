/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:07:16 by aakyuz            #+#    #+#             */
/*   Updated: 2024/12/04 14:58:03 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check(unsigned long long result, const char *str, int sign,
		int i)
{
	if ((sign == 1 && result > 2147483647) || (sign == -1
			&& result > 2147483648) || ft_strlen(str + i) > 11)
		return (0);
	else
		return (1);
}

static int	ft_white_space(int i, const char *str)
{
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

static int	sign_checker(int i, const char *str)
{
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
		i++;
	return (i);
}

static int	sign_finder(int i, const char *str, t_stack *stack, int *arr)
{
	int	sign;

	sign = 1;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] < 48 || str[i] > 57)
	{
		free(arr);
		error_a(stack);
	}
	return (sign);
}

int	atoi_max(const char *str, t_stack *stack, int *arr)
{
	int			i;
	long long	result;
	int			sign;
	int			re;

	i = 0;
	result = 0;
	sign = 1;
	re = 0;
	i += ft_white_space(i, str);
	sign = sign_finder(i, str, stack, arr);
	i += sign_checker(i, str);
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = ((result * 10) + (str[i++] - 48));
		re = ft_check(result, str, sign, i);
		if (re == 0)
		{
			free(arr);
			error_a(stack);
		}
	}
	return ((int)(result * sign));
}
