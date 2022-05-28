/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_s_r.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 21:28:13 by jde-melo          #+#    #+#             */
/*   Updated: 2022/05/28 16:38:17 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// swap first 2 elements of the list

void	swap(t_stack **head)
{
	int	tmp;

	if (!(*head))
		return ;
	tmp = (*head)->number;
	(*head)->number = (*head)->next->number;
	(*head)->next->number = tmp;
}

void sa_sb_ss(t_stack **a, t_stack **b, char stack)
{
	if (stack == 'a')
	{
		swap(a);
		write(1, "sa\n", 3);
	}
	else if (stack == 'b')
	{
		swap(b);
		write(1, "sb\n", 3);
	}
	else
	{
		swap(a);
		swap(b);
		write(1, "ss\n", 3);
	}
}
// shifts up all elements by 1

void	rotate(t_stack **head)
{
	t_stack	*new_head;
	t_stack	*go_last;

	if (!(*head))
		return ;
	new_head = (*head)->next;
	(*head)->prev = NULL;
	go_last = (*head);
	last_node(*head)->next = go_last;
	go_last->next = NULL;
	(*head) = new_head;
}

// shifts down all elements by 1

void	rev_rot(t_stack **head)
{
	t_stack *new_head;
	t_stack	*go_last;

	if (!(*head))
		return ;
	go_last = last_node(*head)->prev;
	new_head = last_node(*head);
	go_last->next = NULL;
	new_head->prev = NULL;
	new_head->next = (*head);
	(*head) = new_head;
}
