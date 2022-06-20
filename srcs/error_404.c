/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checklist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:08:34 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/20 20:53:18 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	ft_atol(char *str);
{
	int		i;
	long	result;
	int		sign;

	i = 0;
	sign = -1;
	result = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 - (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	is_duplicate(char **argv)
{
	int i;
	int dup;

	i = 0;
	while (argv[i])
	{
		dup = i + 1;
		while (argv[dup])
		{
			if (ft_atol(argv[i]) == ft_atol(argv[dup]))
				return (1);
			dup++;
		}
		i++;
	}
	return (0);
}

int	is_int(int argc, char **argv)
{
	int		i;
	int		arg;
	long	nb;

	arg = 1;
	while (argv[arg] )
	{
		i = 0;
		while (argv[arg][i])
		{
			while (argv[arg][i] == '-' || argv[arg][i] == '+')
				i++;
			nb = atol(argv[arg]);
			if (ft_isdigit(argv[arg][i]) == 0 || 
					(nb > 2147483647 || nb < -2147483648))
				return (1);
			i++;
		}
		arg++;
	}
	return (0);
}


int	error_404(int argc, char **argv)
{
	if (is_duplicate(argv))
		return (1);
	if (is_int(argc, argv))
		return (1);
	if (argc == 1)
		return (1);
	return (0);
}

/*
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
		is_duplicate(argv);
	}
}*/
