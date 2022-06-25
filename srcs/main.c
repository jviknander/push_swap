/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:16:46 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/25 17:37:42 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*head_a;
	t_stack *head_b;
	int		i;

	i = 0;
	head_a = NULL;
	head_b = NULL;
	while (argc > i)
		add_node_back(&head_a, new_node(ft_atoi(argv[i++])));
	if (error_404(argc, argv) == 0)
	{
		if (argc <= 2)
			return (0);
		push_swap(&head_a, &head_b);
	}
	else
		return (write(1, "Error\n", 6));
	return (0);
}
