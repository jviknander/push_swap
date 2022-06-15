/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checklist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:08:34 by jde-melo          #+#    #+#             */
/*   Updated: 2022/06/15 15:17:21 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"
/*
int is_duplicate(t_stack *head, int len, char *str)
{
	int	number;
	int	iter;

	number = ft_atoi(str);
	number = -1;
	while (++iter < len)
		if(value[iter] == number)
			return (1);
	return (0);
}
*/
static int	ft_isspace(int chr)
{
	return (chr == 9 || chr == 10 || chr == 11
		|| chr == 12 || chr == 13 || chr == 0 || chr == ' ');
}

static int	ft_issign(char chr)
{
	return (chr == '-' || chr == '+');
}

static int	apinto_atoi(const char *str, int *error)
{
	int	sign;
	int	res;

	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (ft_issign(*str))
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	res = 0;
	while (ft_isdigit(*str))
	{
		if ((res * 10 + (*(str) - 48)) < res)
			*error = 1;
		res = res * 10 + (*(str++) - 48);
	}
	if (*str && !ft_isdigit(*str))
		*error = 1;
	return (res * sign);
}

int	ft_is_int(char *src)
{
	int		value;
	int		error;

	error = 0;
	value = apinto_atoi(src, &error);
	if (!error)
		return (1);
	else
		return (0);
}
int	parsing(char **argv, t_stack *head)
{
	while (*++argv)
		if (ft_is_int(*argv))
			head->number = ft_atoi(*argv);
	else
		return (0);
	return(1);

}


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
		parsing(argv, head_a);
	}
}
