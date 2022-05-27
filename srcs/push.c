/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:27:02 by jde-melo          #+#    #+#             */
/*   Updated: 2022/05/27 17:27:19 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
void	push(t_stack **head_a, t_stack **head_b)
{
	t_stack	*aux;

	aux = *head_a;
	add_node_front(&aux, *head_b);
	if ((*head_a)->next != NULL)
	{
		aux = (*head_a)->next;
		aux->prev = NULL;
		free(*head_a);
	}
	else
	{

	}
}

int main(int argc, char **argv)
{
	t_stack *head_a;
	t_stack	*head_b;
	int i;

	head_b = new_node(2);
	add_node_back(&head_b, new_node(3));
	i = 1;
	if (argc >= 2)
	{
		while (argc > i)
		{
			add_node_back(&head_a, new_node(ft_atoi(argv[i++])));
		}
		printf("STACK A:\n");
		printlist(&head_a);
		printf("STACK B:\n");
		printlist(&head_b);
		push(&head_a, &head_b);
		printf("STACK A1:\n");
		printlist(&head_a);
		printf("STACK B2:\n");
		printlist(&head_b);
	}
}

