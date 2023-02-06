/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:35:44 by vlima             #+#    #+#             */
/*   Updated: 2023/02/06 15:07:40 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*push_swap(int argc, char **argv)
{
	int		i;
	t_node	*node;
	t_node	*start;

	start = NULL;
	i = 1;
	while (i != argc)
	{
		node = ft_addstack(ft_atol(argv[i]), argc);
		if (start == NULL)
		{
			start = node;
		}
		else
		{
			ft_lstadd_back(&start, node);
		}
		i++;
	}
	return (start);
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		i[30];
	int		k;


	stack_a = push_swap(argc, argv);
	stack_b = NULL;
	stack_a ->head = stack_a;

	list2array(&stack_a, i, 30);
	sort_array_ascending(i, 30);
		while(k < 30)
	{
		printf("%d\n", i[k]);
		k++;
	}
	printstack(&stack_a, &stack_b);
	match_finder(&stack_a, &stack_b, i, 20);

	/*
	
	
		if (argc < 5)
	{
		short_sorter(&stack_a);
	}
	if (argc > 5 && argc < 7)
	{
		sorter5(&stack_a, &stack_b);w
	} 
	printstack(&stack_a, &stack_b);*/
	return (0);
}
