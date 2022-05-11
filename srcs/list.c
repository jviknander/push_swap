/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:19:41 by jde-melo          #+#    #+#             */
/*   Updated: 2022/05/11 12:15:38 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// creates a list

a_stack	*new_node(int value)
{
	a_stack	*new;

	new = (a_stack *)malloc(sizeof(a_stack));
	if (!new)
		return (NULL);
	new->value = value;
	new->next = NULL;
	new->pos = 0;
	new->prev = NULL;
	return (new);
}

a_stack *last_node(a_stack *node)
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

void	lstclear(a_stack **lst, int value)
{
	a_stack	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
	if (tmp)
		free(tmp);
	lst = NULL;
}

/*
void	add_node_front(a_stack **head, int value)
{
	a_stack	*new_node;

	new_node = new_node(value);
	if (!*head)
	{
		*head = new_node;
		return ;
	}
	(*head)->prev = new_node;
	new_node->next = (*head);
	new_node->prev = NULL;
	(*head) = new_node; // o q ta na rimeira posicao seja o new_node.
}
*/
void	add_node_back(a_stack **head, a_stack *node)
{
	a_stack	*tmp;

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

int	lstsize(a_stack *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}


int main ()
{
	a_stack *head;
	a_stack *node;

	node = new_node(6); 
	head = new_node(4);
	add_node_back(&head, node);
	printf("%d\n", head->value);
	printf("%d\n", head->next->value);
	printf("%d\n", head->next->prev->value);
	return 0;
}
