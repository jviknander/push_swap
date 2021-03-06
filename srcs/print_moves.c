/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:00:09 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/29 13:36:18 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_moves(t_stack **head, char *str, void (*f)(t_stack **), int times)
{
	if (!head)
		return ;
	while (times--)
	{
		f(head);
		ft_putstr_fd(str, 1);
	}
}

void	print_push(t_stack **head_a, t_stack **head_b, int times, char stack)
{
	if (!head_a || !head_b)
		return ;
	while (times--)
	{
		push(head_a, head_b);
		if (stack == 'a')
			ft_putstr_fd("pa\n", 1);
		else
			ft_putstr_fd("pb\n", 1);
	}
}
