/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:40:53 by jde-melo          #+#    #+#             */
/*   Updated: 2022/05/16 19:56:47 by jde-melo         ###   ########.fr       */
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


/*---------------list.c------------*/
t_stack	*new_node(int number);
t_stack	*last_node(t_stack *node);
void	free_nodes(t_stack **head);
void	add_node_front(t_stack	**head, t_stack *node);
void	add_node_back(t_stack	**head, t_stack *node);
int		head_size(t_stack *head);


/*---------------if_error.c------------*/
/*---------------p_s_r.c------------*/
void swap(t_stack **head);
/*---------------order.c------------*/
/*---------------print.c------------*/
void	printlist(t_stack **head);

#endif
