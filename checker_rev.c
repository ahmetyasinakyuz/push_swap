/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_rev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 03:34:50 by aakyuz            #+#    #+#             */
/*   Updated: 2024/12/04 14:07:04 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_rr_bonus(t_stack *stack)
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
}

int	ft_check_same_bonus(char *str, char *cm)
{
	int	i;

	i = 0;
	if (ft_strlen(str) != ft_strlen(cm))
		return (0);
	while (str[i] && cm[i])
	{
		if (str[i] != cm[i])
			return (0);
		i++;
	}
	return (1);
}

void	ft_space_checker_bonus(int argc, char **argv)
{
	int	i;
	int	j;
	int	c;

	i = 1;
	j = 0;
	c = 0;
	while (i < argc)
	{
		j = 0;
		c = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == ' ')
				c++;
			j++;
		}
		if (j == c || ft_strncmp(argv[i], "", 12) == 0)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
}

void	ft_num_checker_bonus(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i] != NULL)
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] < 48 || argv[i][j] > 57) && argv[i][j] != 32
				&& argv[i][j] != 45 && argv[i][j] != 43)
			{
				write(2, "Error\n", 6);
				exit(1);
			}
			if ((argv[i][j + 1] == 45 || argv[i][j + 1] == 43)
				&& (argv[i][j] >= 48 && argv[i][j] <= 57))
			{
				write(2, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

char	**ft_split_numbers_bonus(int argc, char **argv, int *size)
{
	char	**c;
	char	*a;
	char	*b;
	char	*temp;
	int		i;

	i = 1;
	b = ft_strdup("");
	while (i < argc)
	{
		a = ft_strjoin(argv[i], " ");
		temp = b;
		b = ft_strjoin(b, a);
		free(temp);
		free(a);
		i++;
	}
	c = ft_split(b, ' ');
	i = 0;
	while (c[i])
		i++;
	*size = i;
	free(b);
	return (c);
}
