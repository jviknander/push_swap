/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 12:40:35 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/23 13:49:52 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_stack(int argc, char **argv, t_stack **head)
{
	int		i;

	i = 0;
	while (argc > i)
		add_node_back(head, new_node(ft_atoi(argv[i++])));
}
