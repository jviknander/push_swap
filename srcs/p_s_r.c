/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_s_r.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 21:28:13 by jde-melo          #+#    #+#             */
/*   Updated: 2022/05/19 21:46:42 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// swap first 2 elements of the list

void	swap(t_stack **head)
{
	int	tmp;

	tmp = (*head)->number;
	(*head)->number = (*head)->next->number;
	(*head)->next->number = tmp;
}



// shifts up all elements by 1

void	rotate(t_stack **head)
{
	t_stack	*new_head;
	t_stack	*go_last;


	new_head = (*head)->next;
	(*head)->prev = NULL;
	go_last = (*head);
	last_node(*head)->next = go_last;
	go_last->next = NULL;
	(*head) = new_head;

}

void	rev_rot(t_stack **head)
{
	t_stack *new_head;
	t_stack	*go_last;

	go_last = last_node(*head)->prev;
	new_head = last_node(*head);
	go_last->next = NULL;
	new_head->prev = NULL;
	new_head->next = (*head);
	(*head) = new_head;
}

void	push(t_stack **head_a, t_stack **head_b)
{
	add_node_front(head_a, new_node((*head_b)->number)); 
	(*head_b) = (*head_b)->next;
	free((*head_b)->prev);
	(*head_b)->prev = NULL;
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

