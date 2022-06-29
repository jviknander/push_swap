/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_s.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 00:06:29 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/29 13:36:16 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// swap first 2 elements of the list

void	swap(t_stack **head)
{
	int	tmp;

	if (!(*head))
		return ;
	tmp = (*head)->number;
	(*head)->number = (*head)->next->number;
	(*head)->next->number = tmp;
}

void	push(t_stack **src, t_stack **dest)
{
	t_stack	*temp;

	temp = *dest;
	*dest = temp->next;
	temp->prev = NULL;
	add_node_front(src, temp);
}
// shifts up all elements by 1

void	rotate(t_stack **head)
{
	t_stack	*new_head;
	t_stack	*go_last;

	if (!(*head))
		return ;
	new_head = (*head)->next;
	(*head)->prev = NULL;
	go_last = (*head);
	last_node(*head)->next = go_last;
	go_last->next = NULL;
	(*head) = new_head;
}

// shifts down all elements by 1

void	rev_rot(t_stack **head)
{
	t_stack	*new_head;
	t_stack	*go_last;

	if (!(*head))
		return ;
	go_last = last_node(*head)->prev;
	new_head = last_node(*head);
	go_last->next = NULL;
	new_head->prev = NULL;
	new_head->next = (*head);
	(*head) = new_head;
}
/*
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
		pa_pb(&head_a, &head_b, 'b');
		printf("STACK A1:\n");
		printlist(&head_a);
		printf("STACK B2:\n");
		printlist(&head_b);
	}
}
*/
