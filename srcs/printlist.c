/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:32:46 by jde-melo          #+#    #+#             */
/*   Updated: 2022/05/16 19:56:49 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void printlist(t_stack **head)
{
	t_stack *temp;

	temp = (*head);
	printf("%d\n", temp->number);
	temp = temp->next;
	while (temp->number != (*head)->number)
	{
		printf("%d\n", temp->number);
		temp = temp->next;
	}
}
