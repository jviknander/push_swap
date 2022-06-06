/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checklist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:08:34 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/06 11:46:20 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <limits.h>

// not int
int	is_int(int argc, char **argv)
{
	int	i;
	int arg;

	i = 0;
	arg = 1;
	while (argc > arg)
	{
		i = 0;
		while (argv[arg][i])
		{
			if (argv[arg][i] == '-' || argv[arg][i] == '+')
				i++;
			if (ft_isdigit(argv[arg][i]) == 0)
			{
				write(1, "Error\n", 6);
				return (0);
			}
			i++;
		}
		arg++;
	}
	return (1);
}

// bigger than int
int is_big(int argc, char **argv)
{
	int	i;
	int	arg;

	i = 0;
	arg = 1;
	while (argc > arg)
	{
		i = 0;
		while (argv[arg][i])
		{
			if (is_int(argc, argv) < INT_MIN || is_int(argc, argv) > INT_MAX)
			{
				write(1, "Error\n", 6);
				return (0);
			}
			i++;
		}
		arg++;
	}
	return (1);
}

/*
// duplicates
int is_dup(int argc, char **argv)
{
	int i;
	int arg;

	i = 0;
	arg = 1;
	if (argc > arg)
	{
		i = 0;
		while (argv[arg][i])
		{
			

		}
	}

}




int check_errors(int argc, char **argv)
{
	if (!is_int(argv) || !is_dup(argv) || !is_big(argv))
		return (0);
	return (1);
}
*/
int main(int argc, char **argv)
{
	t_stack *head_a;
	int i;
	
	i = 1;
	if (argc >= 2)
	{
		while (argc > i)
		{
			add_node_back(&head_a, new_node(ft_atoi(argv[i++])));
		}
		is_big(argc, argv);
	}
}
