/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:40:53 by jde-melo          #+#    #+#             */
/*   Updated: 2022/05/06 13:13:55 by jde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/libft.h"
#include <sdtio.h>
#include <stdlib.h>

typedef	struct a_stack
{
	int				value;
	int				position;
	struct a_stack	*next;
	struct a_stack	*prev;
}	a_stack;

#endif
