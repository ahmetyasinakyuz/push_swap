/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:50:13 by aakyuz            #+#    #+#             */
/*   Updated: 2024/12/04 14:01:23 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_stack_free_bonus(t_stack *stck)
{
	int	i;

	i = 0;
	while (stck->args[i])
		free(stck->args[i++]);
	free(stck->args);
	free(stck->stack_a);
	free(stck->stack_b);
}

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	execute_command(char *cmd, t_stack *stack)
{
	if (ft_check_same_bonus("sa\n", cmd))
		ft_sa_bonus(stack);
	else if (ft_check_same_bonus("sb\n", cmd))
		ft_sb_bonus(stack);
	else if (ft_check_same_bonus("ss\n", cmd))
		ft_ss_bonus(stack);
	else if (ft_check_same_bonus("pa\n", cmd))
		ft_pa_bonus(stack);
	else if (ft_check_same_bonus("pb\n", cmd))
		ft_pb_bonus(stack);
	else if (ft_check_same_bonus("ra\n", cmd))
		ft_ra_bonus(stack);
	else if (ft_check_same_bonus("rb\n", cmd))
		ft_rb_bonus(stack);
	else if (ft_check_same_bonus("rr\n", cmd))
		ft_rr_bonus(stack);
	else if (ft_check_same_bonus("rra\n", cmd))
		ft_rra_bonus(stack);
	else if (ft_check_same_bonus("rrb\n", cmd))
		ft_rrb_bonus(stack);
	else if (ft_check_same_bonus("rrr\n", cmd))
		ft_rrr_bonus(stack);
	else
		print_error();
}

void	make(char *cmd, t_stack *stack)
{
	if (ft_strlen(cmd) <= 4)
		execute_command(cmd, stack);
	else
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

int	main(int argc, char **argv)
{
	t_stack	stck;
	char	*cm;

	if (1 < argc)
	{
		ft_space_checker_bonus(argc, argv);
		ft_num_checker_bonus(argv);
		stck.args = ft_split_numbers_bonus(argc, argv, &stck.size_a);
		stck.stack_a = ft_num_ar_bonus(stck.args);
		ft_creat_stack_bonus(&stck);
		while (1)
		{
			cm = get_next_line(0);
			if (cm == NULL)
				break ;
			make(cm, &stck);
		}
		if (ft_is_sorted_a_bonus(&stck) && stck.size_b == 0)
			ft_printf("OK\n");
		else
			ft_printf("KO\n");
		ft_stack_free_bonus(&stck);
		free(cm);
	}
}
