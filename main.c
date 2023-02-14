/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:35:44 by vlima             #+#    #+#             */
/*   Updated: 2023/02/14 12:34:34 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdbool.h>

bool	checker_dup(int *array, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] == array[j])
			{
				printf(" have dup\n");
				return (0);
			}
			j++;
		}
		i++;
	}
	printf("not dup\n");
	return (1);
}

int	checker_num(int argc, char *argv[])
{
	char	*str;
	int		i;
	int		h;

	i = 1;
	while (i < argc)
	{
		h = 0;
		str = argv[i];
		if (ft_atol(argv[i]) > 2147483647 || ft_atol(argv[i]) < -2147483648
			|| ft_strlen(argv[i]))
		{
			printf("not int\n");
			return (0);
		}
		while (str[h] != '\0')
		{
			if ((str[h] < 48 || str[h] > 57) && str[h] != 45)
			{
				printf("not number\n");
				return (0);
			}
			h++;
		}
		i++;
	}
	return (1);
}

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
	int		i[argc];

	if (checker_num(argc, argv) == 0)
		return (0);
	stack_a = push_swap(argc, argv);
	stack_b = NULL;
	stack_a->head = stack_a;
	list2array(&stack_a, i, argc - 1);
	sort_array_ascending(i, argc - 1);
	if (checker_dup(i, argc) == 0)
		return (0);
	//printstack(&stack_a, &stack_b);
	match_finder(&stack_a, &stack_b, i, argc);
	printf("adad");
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
	//return (0);
}
//61 74 12 63 64 59 58 83 3 80 70 18 50 40 13 19 4 55 56 51 30 21 93 2 81 17 66 57 6 76 89 28 11 14 62 27 54 10 65 41 20 32 35 88 78 86 36 67 94 68 7 47 52 37 85 9 84 22 92 60 77 33 15 5 100 25 73 29 97 16 69 44 39 45 34 79 75 96 26 48 38 98 23 72 42 8 95 43 53 46 87 90 91 82 1 99 71 24 49 31
