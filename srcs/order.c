/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:46:34 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/25 17:42:30 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//the stack is sorted

int	is_sorted(t_stack **head)
{
	t_stack	*temp;

	temp = *head;
	while (temp->number < temp->next->number)
	{
		temp = temp->next;
		if (temp->next == NULL)
			return (1);
	}
	return (0);
}

//order 3

void	order_3(t_stack **head)
{
	if ((*head)->next->number < (*head)->number)
	{
		if (max_list(*head) == (*head)->number)
			print_moves(head, "ra\n", rotate, 1);
		if (is_sorted(head) == 0)
			print_moves(head, "sa\n", swap, 1);
	}
	else if (is_sorted(head) == 0)
	{
		if (min_list(*head) == (*head)->number)
		{
			print_moves(head, "sa\n", swap, 1);
			print_moves(head, "ra\n", rotate, 1);
		}
		else
			print_moves(head, "rra\n", rev_rot, 1);
	}
}

// order 5

void	order_5(t_stack **head_a, t_stack **head_b)
{
	print_push(head_a, head_b, 2, 'b');
	order_3(head_a);
	print_push(head_b, head_a, 1, 'a');
	print_moves(head_a, "ra", rotate, 1);
	if (is_sorted(head_a) == 0)
	{
		print_push(head_a, head_b, 1, 'b');
		order_3(head_a);
	}
}



















