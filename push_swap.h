/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:26:05 by aakyuz            #+#    #+#             */
/*   Updated: 2024/12/04 14:57:39 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include "printf/ft_printf.h"

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

int			*num_ar(char **arg, t_stack *stack);
int			atoi_max(const char *str, t_stack *stack, int *arr);
void		error_a(t_stack *stack);
void		sa(t_stack *stack);
void		sb(t_stack *stack);
void		ss(t_stack *stack);
void		pa(t_stack *stack);
void		pb(t_stack *stack);
void		ra(t_stack *stack);
void		rb(t_stack *stack);
void		rr(t_stack *stack);
void		rra(t_stack *stack);
void		rrb(t_stack *stack);
void		rrr(t_stack *stack);
void		creat_stack(t_stack *stack);
void		is_sorted(t_stack *stack);
void		sort_2(t_stack *stack);
void		sort_3(t_stack *stack);
void		sort_stack(t_stack *stack);
void		cost_a(t_stack *stack, int index, t_moves *moves);
void		cost_b(t_stack *stack, int index, t_moves *moves);
void		dub_cost(t_moves *moves);
void		initiates_moves(t_moves *moves);
void		make_cheapest(t_stack *stack, t_moves *moves);
void		make_push_a(t_stack *stack, t_moves *moves);
int			is_sorted_a(t_stack *stack);
void		make_b(t_stack *stack, t_moves *moves);
int			get_next_bigger(t_stack *stack, int index_b);
int			get_next_smaller(t_stack *stack, int index_a);
int			find_max(t_stack *stack);
int			find_min(t_stack *stack);
int			has_greater_value_in_a(t_stack *stack, int i);
int			find_min_index(t_stack *stack);
void		stack_free(t_stack *stck);

#endif
