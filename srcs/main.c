/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:16:46 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/22 02:27:31 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a_stack;
	t_stack	*b_stack;
	int i;

	i = 1;
	a_stack = NULL;
	b_stack = NULL;
	if (argc >= 2)
	{
		while (argc > i)
		{
			add_node_back(&a_stack, new_node(ft_atoi(argv[i++])));
		}
		order_3(&a_stack);
	}
}
