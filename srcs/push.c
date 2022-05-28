/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:27:02 by jde-melo          #+#    #+#             */
/*   Updated: 2022/05/28 17:08:37 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
/*
void	push(t_stack **head_a, t_stack **head_b)
{
	add_node_front(head_a, new_node((*head_b)->number));
	(*head_b) = (*head_b)->next;
	free((*head_b)->prev);
	(*head_b)->prev = NULL;
}
*/
void	push(t_stack **head_a, t_stack **head_b)
{
	t_stack	*aux;

	if (head_size(*head_a) == 0)
		return ;
	aux = *head_a;
	add_node_front(head_b, aux);
	if ((*head_a)->next)
	{
		aux = (*head_a)->next;
		aux->prev = NULL;
		free(*head_a);
		*head_a = aux;
	}
	else
		free_nodes(head_a);
}

void	pa_pb(t_stack **a, t_stack **b, char stack)
{
	push(a, b);
	if (stack == 'a')
		write(1, "pa\n", 3);
	else if (stack == 'b')
		write(1, "pb\n", 3);
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

