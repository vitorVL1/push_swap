/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:35:24 by vlima             #+#    #+#             */
/*   Updated: 2023/03/08 18:23:54 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void double_r (t_node **stack1, t_node **stack2)
{
	int i;
	int *array;
	int size;
	int	tog;
	
	t_node	*current;

	current = *stack1;
	array = utils()->save_array;
	tog = 20;
	if (utils()-> rep == 0)
		tog = utils()->i;
			//printf("array[tog]: %d\narray[0]: %d\ncurrent: %d\nnext: %d\n", array[tog], array[0], current->content, current->next->content);
	/* for(int i=0; i < 20; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n"); */
	while(i< tog)
	{
		//printf("array %i\n",array[i]);
		if (current->content <= array[tog] && current->content >= array[0] && !(current->next->content <= array[tog] && current->next->content >= array[0]))
		{
				rb(stack1);
			return ;
		}
		i++;
	}
	rr(stack1,stack2);
}
