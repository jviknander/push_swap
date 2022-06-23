/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:16:46 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/23 13:49:00 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	**head_a;	

	head_a = NULL;
	init_stack(argc, argv, head_a);
	if (error_404(argc, argv) == 0)
	{
		if (argc >= 2)
		{
			push_swap(head_a);
		}
	}
	else
		return (write(1, "Error\n", 6));
}
