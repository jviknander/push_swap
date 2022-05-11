/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:40:53 by jde-melo          #+#    #+#             */
/*   Updated: 2022/05/11 12:00:14 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/libft.h"
#include <stdio.h>
#include <stdlib.h>

typedef	struct a_stack
{
	int				value;
	int				pos;
	struct a_stack	*next;
	struct a_stack	*prev;
}	a_stack;

#endif
