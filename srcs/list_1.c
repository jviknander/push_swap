/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:19:41 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/06 12:47:13 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// creates a stack

t_stack	*new_node(int number)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->number = number;
	new->next = NULL;
	new->pos = 0;
	new->prev = NULL;
	return (new);
}

// returns stacks' last node

t_stack *last_node(t_stack *node)
{
	if (!node)
		return (NULL);
	while (node)
	{
		if (node->next == NULL)
			return (node);
		node = node->next;
	}
	return (node);
}

// free the node!!!!

void	free_nodes(t_stack **head)
{
	t_stack	*tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	if (tmp)
		free(tmp);
	head = NULL;
}

//adds node to the top of the stack

void	add_node_front(t_stack **head, t_stack *node)
{
	if (!*head)
	{
		*head = node;
		return ;
	}
	(*head)->prev = node;
	node->next = (*head);
	node->prev = NULL;
	(*head) = node;
}

//adds node at the end of the stack

void	add_node_back(t_stack **head, t_stack *node)
{
	t_stack	*tmp;

	if (!*head)
	{
		*head = node;
		return ;
	}
	tmp = last_node(*head);
	tmp->next = node;
	node->next = NULL;
	node->prev = tmp;
	return ;
}

/*
int main ()
{
	t_stack *head;
	t_stack *node;

	node = new_node(6); 
	head = new_node(4);
	add_node_front(&head, node);
	add_node_front(&head, new_node(7));
	printf("%d\n", head->number);
	printf("%d\n", head->next->number);
	printf("%d\n", head->next->next->number);
	return 0;

}*/
