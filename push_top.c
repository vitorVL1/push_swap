/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_top.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitorvl <vitorvl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:24:25 by vlima             #+#    #+#             */
/*   Updated: 2023/02/28 17:26:34 by vitorvl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_top(t_node **stack1, int cont)
{
	int	half;

	half = ft_lstsize(*stack1) / 2;
	if (cont < half)
	{
		while (cont >= 1)
		{
			cont--;
			ra(stack1);
		}
	}
	else if (cont >= half)
	{
		while (cont < half && cont != ft_lstsize(*stack1))
		{
			cont++;
			rra(stack1);
		}
	}
}

void	ft_pushtotop(t_node **stack1, t_node **stack2, int cont)
{
	int	half;

	//printf("valor da posicao %d\n", cont);
	half = ft_lstsize(*stack1) / 2;
	if (cont == 1)
		ra(stack1);
	else
		ft_push_top(stack1, cont);
	stack_organizer(stack1, stack2);
	//pb(stack1, stack2);
	//printstack(stack1, stack2);
	//printf("pusttop");
}

void	match_finder(t_node **stack1, t_node **stack2, int *array, int size)
{
	t_node	*current;
	int		i;
	int		pos;

	pos = 0;
	current = *stack1;
	while (current)
	{
		i = 0;
		while (i < size-2)
		{
			if (current->content == array[i])
			{
				//printf("valor do array:%d valor da list:%d \n", array[i],
						//current->content);
				ft_pushtotop(stack1, stack2, pos);
				current = *stack1;
				pos = 0;
				i = -1;
				//printf("saiu pushtop\n");
				//printstack(stack1, stack2);
				//printf("afteer pritn\n");

			}
			i++;
		}
		if (i >= 0)
			current = current->next;
		pos++;
	}
	//printf("saiu match\n");
	stack_organizer(stack1,stack2);
	//printstack(stack1, stack2);
}

//14 22 12 1 18 19 3 25 21 5 8 2 13 9 15 27 16 28 26 20 11 24 29 30 17 4 23 6 10 7
