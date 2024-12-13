/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:11:49 by aakyuz            #+#    #+#             */
/*   Updated: 2024/12/04 14:33:09 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	space_checker(int argc, char **argv)
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

void	num_checker(char **argv)
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

char	**split_numbers(int argc, char **argv, int *size)
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

void	stack_free(t_stack *stck)
{
	int	i;

	i = 0;
	while (stck->args[i])
		free(stck->args[i++]);
	free(stck->args);
	free(stck->stack_a);
	free(stck->stack_b);
}

int	main(int argc, char **argv)
{
	t_stack	stck;

	if (1 < argc)
	{
		space_checker(argc, argv);
		num_checker(argv);
		stck.args = split_numbers(argc, argv, &stck.size_a);
		stck.stack_a = num_ar(stck.args, &stck);
		creat_stack(&stck);
		is_sorted(&stck);
		if (stck.size_a == 2)
			sort_2(&stck);
		else if (stck.size_a == 3)
			sort_3(&stck);
		else
			sort_stack(&stck);
		stack_free(&stck);
	}
}
