/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_s_r.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 21:28:13 by jde-melo          #+#    #+#             */
/*   Updated: 2022/05/16 00:19:43 by jde-melo         ###   ########.fr       */
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

int main(int argc, char **argv)
{
	if (argc <  2)
		return 1;
	
	t_stack *head;
	t_stack *temp;
	int i;
	int	j;

	i = argc - 1;
	j = 1;
	while(i--)
		add_node_back(&head, new_node(ft_atoi(argv[j++])));
	temp = head;
	while (++i < argc - 1)
	{
		//temp = new_node(ft_atoi(argv[i]));
		printf("%d\n", temp->number);
		temp = temp->next;	
	}
	printf("%d\n", head->number);
	printf("%d\n", head->next->next->number);
	swap(&head);
	printf("%d\n", head->number);
	printf("%d\n", head->next->number);
	printf("%d\n", head->next->next->number);

}
