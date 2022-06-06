/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:11:09 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/06 12:46:41 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../insludes/push_swap.h"

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

void	min_list(t_stack **head)
{
	int min;

	while (*head->next != NULL)
	{
		if (*head->number < min)
			*head->number = min;
		*head = *head->next;
	}
	return (min);
}


// max value of the list

void max_list(t_stack **head)
{
	int max;

	while (*head->next != NULL)
	{
		if (*head->number > max)
			max = *head->number;
		head = head->next;
	}
}
