/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:40:53 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/23 01:04:17 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>

typedef struct s_struct
{
	int				number;
	int				pos;
	struct s_struct	*next;
	struct s_struct	*prev;
}	t_stack;

/*-*-*-*-*-*-*- main.c -*-*-*-*-*-*/
int		main(int argc, char **argv);

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
int		is_int(char **argv);
int		is_duplicate(char **argv);
long	ft_atol(char *str);
int		error_404(int argc, char **argv);

/*-*-*-*-*-*-*- operations.c -*-*-*-*-*-*/
void	swap(t_stack **head);
void	push(t_stack **src, t_stack **dest);
void	rotate(t_stack **head);
void	rev_rot(t_stack **head);

/*---------------order.c------------*/
int		is_sorted(t_stack **head);
void	order_3(t_stack **head);
void	order_5(t_stack **head);

/*---------------print.c------------*/
void	printlist(t_stack **head);
void	print_moves(t_stack **head, char *str,
			void (*f)(t_stack **), int times);

#endif
