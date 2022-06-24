/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:18:28 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/25 00:48:13 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_swap(t_stack **head)
{
	if (is_sorted(head))
		return ;
	else
	{
		if (head_size(*head) == 3)
			order_3(head);
		//else if (head_size(head) == 5)
		//	order_5(head);
		//else if (head_size(head) > 5)
		//	order_big(head);
	}
}

void	order_5(t_stack **head_a, t_stack **head_b)
{
	print_push(head_a, head_2, 2, "b");
	order_3(head_a);

}
