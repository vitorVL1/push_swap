/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:58:37 by vlima             #+#    #+#             */
/*   Updated: 2023/01/16 16:39:38 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

t_node	*ft_addstack(long value, int argc)
{
	t_node	*newlst;

	newlst = malloc(sizeof(t_node));
	if (newlst == NULL)
		return (NULL);
	newlst->content = value;
	newlst->next = NULL;
	newlst->argc = argc;
	return (newlst);
}

long	ft_atol(const char *str)
{
	long		result;
	int			sign;
	const char	*p;

	result = 0;
	sign = 1;
	p = str;
	if (*p == '-')
	{
		sign = -1;
		p++;
	}
	while (*p >= '0' && *p <= '9')
	{
		result = (result * 10) + (*p - '0');
		p++;
	}
	return (sign * result);
}
