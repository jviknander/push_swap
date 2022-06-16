/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:46:34 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/16 16:03:44 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//the stack is sorted

void	is_sorted(t_stack **head)
{
	if (head->next->number > head->number)
		head->next;
}

//order 3

void	order_3(t_stack **head)
{
	t_stack	*second;
	int		size;

	size = head_size(head);
	if (size == 2)
	{
		if (!is_sorted(*head))
			swap(*head);
	}
	second = (*head)->next;
	if (size == 3)
	{
		if(!is_sorted(*head))
		{

		}
	}
}

//order 5
