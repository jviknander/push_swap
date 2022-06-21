/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:40:53 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/21 18:10:27 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/libft.h"
#include <stdio.h>
#include <stdlib.h>

typedef	struct s_struct
{
	int				number;
	int				pos;
	struct s_struct	*next;
	struct s_struct	*prev;
}	t_stack;



/*-*-*-*-*-*-*- push_swap.c -*-*-*-*-*-*/
int		main(int argc, char **agrv);


/*-*-*-*-*-*-*- list_1.c -*-*-*-*-*-*/
t_stack	*new_node(int number);
t_stack	*last_node(t_stack *node);
void	free_nodes(t_stack **head);
void	add_node_front(t_stack	**head, t_stack *node);
void	add_node_back(t_stack	**head, t_stack *node);

/*-*-*-*-*-*-*- list_2.c -*-*-*-*-*-*/
int		head_size(t_stack *head);
int		min_list(t_stack *head);
int		max_list(t_stack *head);

/*-*-*-*-*-*-*- error_404.c -*-*-*-*-*-*/
int		is_int(int argc, char **argv);
int		is_duplicate(int argc, char **argv);
long	ft_atol(char *str);
int		error_404(int argc, char **argv);


/*-*-*-*-*-*-*- p_s.c -*-*-*-*-*-*/
void	sa_sb_ss(t_stack **a, t_stack **b, char stack);
void	swap(t_stack **head);
void	push(t_stack **src, t_stack **dest);
void	pa_pb(t_stack **a, t_stack **b, char stack);

/*-*-*-*-*-*-*- r_rr.c -*-*-*-*-*-*/
void	rotate(t_stack **head);
void	ra_rb_rr(t_stack **a, t_stack **b, char stack);
void	rev_rot(t_stack **head);
void	rra_rrb_rrr(t_stack **a, t_stack **b, char stack);

/*---------------order.c------------*/
void	is_sorted(t_stack **head);
void	order_3(t_stack **head);
void	order_5(t_stack **head);

/*---------------print.c------------*/
void	printlist(t_stack **head);

#endif
