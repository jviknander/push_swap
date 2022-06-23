/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:32:46 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/23 01:09:11 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	printlist(t_stack **head)
{
	t_stack	*temp;

	temp = (*head);
	while (temp != NULL)
	{
		printf("%d\n", temp->number);
		temp = temp->next;
	}
}
