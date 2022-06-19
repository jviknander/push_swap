/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:46:34 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/19 13:54:08 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//the stack is sorted

void	is_sorted(t_stack **head)
{
	int	size;

	size = head_size(head);
	if (head->next->number > head->number)
		head->next;
	else
	{
		if (size == 3)
			order_3(head);
		if (size == 5)
			order_5(head);
	}
	return (0);
}

//order 3

void	order_3(t_stack **head)
{
	t_stack	*second;

	if (head->number[0] > head->number[2])
	{

	}
	else


}

//order 5
