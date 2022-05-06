/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:19:41 by jde-melo          #+#    #+#             */
/*   Updated: 2022/05/06 13:25:40 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// creates a list

a_stack	*lst_new(int value)
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

a_stack *lstlast(a_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

void	*lstclear(a_stack **lst, int value)
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


void	*lstadd(a_stack **lst, int value)
{
	a_stack	*new_node;
i	a_stack *tmp;

	new_node = lstnew(value);
	if(!*lst)
	{
		*lst = new_node;
		return ;
	}
	tmp = lstlast(*lst);
	tmp->next = new_node;
	tmp->prev = tmp;
}

void	*lstadd_beg(a_stack **lst, int value)
{
	a_stack	*new_node;

	new_node = lstnew(value);
	new_node->value = value;
	new_node->next = (*lst);
	new_node->prev = NULL;
}



int	*lstsize(a_stack *lst)
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
