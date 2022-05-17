/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_s_r.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 21:28:13 by jde-melo          #+#    #+#             */
/*   Updated: 2022/05/17 22:20:03 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// swap first 2 elements of the list

void	swap(t_stack **head)
{
	t_stack	*tmp;

	tmp->number = (*head)->number;
	(*head)->number = (*head)->next->number;
	(*head)->next->number = tmp->number;
	return ;
}

void	rotate(t_stack **head)
{
	t_stack	*new_head;
	t_stack	*go_last;


	new_head = (*head)->next;
	(*head)	->prev = NULL;

	go_last = (*head);
	last_node(*head)->next = go_last;
	go_last->next = NULL;

}

int main(int argc, char **argv)
{
	t_stack *head;
//	t_stack	*temp;
	int i;

	i = 1;
	if (argc >= 2)
	{
		while (argc > i)
		{
			add_node_back(&head, new_node(ft_atoi(argv[i++])));
		}
		swap(&head);
		printf("%d\n", head->number);
		printf("%d\n", head->next->number);
		printf("%d\n", head->next->next->number);
		printf("%d\n", head->next->next->next->number);
		//printlist(&head);
	}
}

