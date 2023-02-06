/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:18:43 by vlima             #+#    #+#             */
/*   Updated: 2023/01/25 12:19:01 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/* 
t_node	*push_swap(int argc, char **argv)
{
	int		i;
	t_node	*node;
	t_node	**start;

	i = 1;
	while (i != argc)
	{
		node = ft_addstack(ft_atol(argv[i]), argc);
		if (*start == NULL)
		*start = node;
		else if (*start != NULL)
		{
			ft_addstack(&start, node);
			node = node->next;
		}
	}
	return (*start);
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = push_swap(argc, argv);
	stack_b = NULL;
	if (argc < 5)
	{
		short_sorter(&stack_a);
	}
	if (argc > 5 && argc < 7)
	{
		sorter5(&stack_a, &stack_b);
	}
	printstack(&stack_a, &stack_b);
	return (0);
}
  */