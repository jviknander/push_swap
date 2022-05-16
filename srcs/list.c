/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:19:41 by jde-melo          #+#    #+#             */
/*   Updated: 2022/05/16 19:56:44 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// creates a list

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
/*
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
*/
// ajuda do fred

void	add_node_back(t_stack **head, t_stack *node)
{
	t_stack	*tmp;

	if (!*head)
	{
		*head = node;
		return ;
	}
	tmp = *head;
	tmp->prev->next = node;
	node->next = tmp;
}

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

/*
int main ()
{
	t_stack *head;
	t_stack *node;

	node = new_node(6); 
	head = new_node(4);
	add_node_back(&head, node);
	printf("%d\n", head->number);
	printf("%d\n", head->next->number);
	printf("%d\n", head->next->prev->number);
	return 0;


int main()
{
	t_stack *head;
	t_stack *node1;
	t_stack *node2;
	t_stack *node3;
	t_stack *node4;
	
	head = new_node(1);
	node1 = new_node(2);
	node2 = new_node(3);
	node3 = new_node(4);
	node4 = new_node(5);

	add_node_front(&head, node1);
	add_node_front(&head, node2);
	add_node_front(&head, node3);
	add_node_front(&head, node4);

	printf("%d\n", head->number);
	printf("%d\n", head->next->number);
	printf("%d\n", head->next->next->number);
	printf("%d\n", head->next->next->next->number);
	printf("%d\n", head->next->next->next->next->number);

}




*/
