/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:18:28 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/25 17:03:23 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_swap(t_stack **head_a, t_stack **head_b)
{
	if (is_sorted(head_a))
		return ;
	else
	{
		if (head_size(*head_a) == 3)
			order_3(head_a);
		else if (head_size(*head_a) == 5)
			order_5(head_a, head_b);
		//else if (head_size(head) > 5)
		//	order_big(head);
	}
}
