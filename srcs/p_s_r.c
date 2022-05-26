/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_s_r.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 21:28:13 by jde-melo          #+#    #+#             */
/*   Updated: 2022/05/26 20:40:43 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// swap first 2 elements of the list

void	swap(t_stack **head)
{
	int	tmp;

	tmp = (*head)->number;
	(*head)->number = (*head)->next->number;
	(*head)->next->number = tmp;
}



// shifts up all elements by 1

void	rotate(t_stack **head)
{
	t_stack	*new_head;
	t_stack	*go_last;


	new_head = (*head)->next;
	(*head)->prev = NULL;
	go_last = (*head);
	last_node(*head)->next = go_last;
	go_last->next = NULL;
	(*head) = new_head;

}

void	rev_rot(t_stack **head)
{
	t_stack *new_head;
	t_stack	*go_last;

	go_last = last_node(*head)->prev;
	new_head = last_node(*head);
	go_last->next = NULL;
	new_head->prev = NULL;
	new_head->next = (*head);
	(*head) = new_head;
}
/*
void	push(t_stack **head_a, t_stack **head_b)
{
	add_node_front(head_a, new_node((*head_b)->number)); 
	(*head_b) = (*head_b)->next;
	free((*head_b)->prev);
	(*head_b)->prev = NULL;
}
*/
