/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:27:02 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/16 16:05:07 by jde-melo         ###   ########.fr       */
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

void	sa_sb_ss(t_stack **a, t_stack **b, char stack)
{
	if (stack == 'a')
	{
		swap(a);
		write(1, "sa\n", 3);
	}
	else if (stack == 'b')
	{
		swap(b);
		write(1, "sb\n", 3);
	}
	else
	{
		swap(a);
		swap(b);
		write(1, "ss\n", 3);
	}
}

void	push(t_stack **src, t_stack **dest)
{
	t_stack	*temp;

	temp = *dest;
	*dest = temp->next;
	temp->prev = NULL;
	add_node_front(src, temp);
}

void	pa_pb(t_stack **a, t_stack **b, char stack)
{
	if (stack == 'a')
	{
		push(b, a);
		write(1, "pa\n", 3);
	}
	else if (stack == 'b')
	{
		push(a, b);
		write(1, "pb\n", 3);
	}
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
