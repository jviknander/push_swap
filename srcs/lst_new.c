/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:19:41 by jde-melo          #+#    #+#             */
/*   Updated: 2022/05/05 13:29:05 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

a_stack	*lst_new(int content)
{
	a_stack	*element;

	element = (a_stack *)malloc(sizeof(a_stack));
	if (!element)
		return (NULL);
	element->content = content;
	element->next = NULL;
	element->pos = 0;
	element->prev = NULL;
	return (element);
}

struct *list = NULL;
