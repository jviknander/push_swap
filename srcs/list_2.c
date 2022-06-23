/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:24:25 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/23 13:35:28 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//stack size

int	head_size(t_stack *head)
{
	int	size;

	size = 0;
	while (head)
	{
		head = head->next;
		size++;
	}
	return (size);
}

// min value of the list

int	min_list(t_stack *head)
{
	int	min;

	min = head->number;
	while (head)
	{
		if (head->number < min)
			min = head->number;
		head = head->next;
	}
	return (min);
}

// max value of the list

int	max_list(t_stack *head)
{
	int	max;

	max = head->number;
	while (head)
	{
		if (head->number > max)
			max = head->number;
		head = head->next;
	}
	return (max);
}
/*
int main(int argc, char **argv)
{
	t_stack *head_a;
	int i;

	i = 1;
	if (argc >= 2)
	{
		while (argc > i)
		{
			add_node_back(&head_a, new_node(ft_atoi(argv[i++])));
		}
		printf("smol number is: %d\n", max_list(head_a));
		
	}
}
*/
