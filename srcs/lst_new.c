/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:19:41 by jde-melo          #+#    #+#             */
/*   Updated: 2022/05/03 11:41:38 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*lst_new(int *content)
{
	element = (t_list *)malloc(sizeof(t_list));
	if (!element)
		retunr (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}
