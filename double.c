/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:35:24 by vlima             #+#    #+#             */
/*   Updated: 2023/03/07 15:20:13 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void double_r (t_node **stack1, t_node **stack2,int d)
{
	int i;
	int *array;
	t_node	*current;

	current = *stack1;
	array = utils()->save_array;
	while(i < (utils()->i))
	{
		if (current->content == array[i])
			return ;
		i++;
	}
	if (d == 0)
	{
		rr(stack1,stack2);
	}
	if (d == 1)
	{
		rrr(stack1,stack2);
	}
}
