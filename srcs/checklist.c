/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checklist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:08:34 by jde-melo          #+#    #+#             */
/*   Updated: 2022/05/27 17:21:17 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// not int
int	is_int(int argc, char **argv)
{
	int	i;
	int arg;

	i = 0;
	arg = 1;
	if (argc >= 2)
	{
		while (argc > arg)
		{
			if (argv[arg][i] >= '0' || argv[arg][i] <= '9')
				i++;
			else
				return (0);
		arg++;
		i = 0;
		}
	}
	return (1);
}
/*
// bigger than int
int bigger_than_int(int argc, char **argv)
{
}


// duplicates
int is_duplicate(int argc, char **argv)
{
}


// is sorted
int is_sorted(int argc, char **argv)
{
}

// write error
*/

int main(int argc, char **argv)
{
	if (!(is_int(argc, argv)))
			write(1, "Error", 6);
}
