/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:25:16 by aakyuz            #+#    #+#             */
/*   Updated: 2024/12/04 05:57:20 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "libft/libft.h"
# include "printf/ft_printf.h"
# include <stdlib.h>

typedef struct s_stack
{
	char	**args;
	int		*stack_a;
	int		*stack_b;
	int		cost;
	int		b_max_index;
	int		size_a;
	int		size_b;
}			t_stack;

typedef struct s_moves
{
	int		ra;
	int		rb;
	int		rr;
	int		rra;
	int		rrb;
	int		rrr;
	int		cost;
}			t_moves;

char		*get_next_line(int fd);
void		ft_space_checker_bonus(int argc, char **argv);
int			ft_check_same_bonus(char *str, char *cm);
void		ft_num_checker_bonus(char **argv);
char		**ft_split_numbers_bonus(int argc, char **argv, int *size);
int			*ft_num_ar_bonus(char **arg);
void		ft_creat_stack_bonus(t_stack *stack);
void		ft_is_sorted_bonus(t_stack *stack);
void		ft_sa_bonus(t_stack *stack);
void		ft_sb_bonus(t_stack *stack);
void		ft_ss_bonus(t_stack *stack);
void		ft_pa_bonus(t_stack *stack);
void		ft_pb_bonus(t_stack *stack);
void		ft_ra_bonus(t_stack *stack);
void		ft_rb_bonus(t_stack *stack);
void		ft_rr_bonus(t_stack *stack);
void		ft_rra_bonus(t_stack *stack);
void		ft_rrb_bonus(t_stack *stack);
void		ft_rrr_bonus(t_stack *stack);
int			ft_is_sorted_a_bonus(t_stack *stack);
int			*ft_allocate_and_convert_bonus(char **arg, int size);
void		ft_check_duplicates_bonus(int *arr, int size);
int			ft_atoi_max_bonus(const char *str);

#endif