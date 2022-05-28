/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checklist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:08:34 by jde-melo          #+#    #+#             */
/*   Updated: 2022/05/28 16:59:03 by jde-melo         ###   ########.fr       */
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
	while (argc > arg)
	{
		while (argv[i])
		{
			if (argv[arg][i] == '-')
				i++;
			if (ft_isdigit(argv[arg][i]) == 0)
			{
				write(1, "Error\n", 6);
				return 0;
			}
			arg++;
		}
		i++;
	}
	return (1);
}

// bigger than int
int is_big(int argc, char **argv)
{
	INT_MIN
	INT_MAX
}


// duplicates
int is_dup(int argc, char **argv)
{

}




int check_errors(int argc, char **argv)
{
	if (!is_int(argv) || !is_dup(argv) || !is_big(argv))
		return (0);
	return (1);
}

int main(int argc, char **argv)
{

}
