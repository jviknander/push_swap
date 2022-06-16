/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_s_r.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 21:28:13 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/16 16:06:40 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

void	ra_rb_rr(t_stack **a, t_stack **b, char stack)
{
	if (stack == 'a')
	{
		rotate(a);
		write(1, "ra\n", 3);
	}
	else if (stack == 'b')
	{
		rotate(b);
		write(1, "rb\n", 3);
	}
	else
	{
		rotate(a);
		rotate(b);
		write(1, "rr\n", 3);
	}
}

// shifts down all elements by 1

void	rev_rot(t_stack **head)
{
	t_stack	*new_head;
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

void	rra_rrb_rrr(t_stack **a, t_stack **b, char stack)
{
	if (stack == 'a')
	{
		rer_rot(a);
		write(1, "rra\n", 4);
	}
	else if (stack == 'b')
	{
		rev_rot(b);
		write(1, "rrb\n", 3);
	}
	else
	{
		rev_rot(a);
		rev_rot(b);
		write(1, "rrr\n", 3);
	}
}
