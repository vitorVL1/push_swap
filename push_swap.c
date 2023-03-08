/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:18:43 by vlima             #+#    #+#             */
/*   Updated: 2023/03/08 18:34:58 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdbool.h>

int	*array_dup(int array[],int array_dup[],  int start)
{
	int	i;
	i = 0;
	while (i < 20 || array[start])
	{
		array_dup[i] = array[start];
		start++;
		i++;
	}
	return (array_dup);
}

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
				//printf(" have dup\n");
				return (0);
			}
			j++;
		}
		i++;
	}
	//printf("not dup\n");
	return (1);
}
//19 27 8 25 14 12 30 18 7 22 21 9 24 2 10 3 11 13 26 15 6 29 20 1 17 23 16 4 28 5
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
			//printf("not int\n");
			return (0);
		}
		while (str[h] != '\0')
		{
			if ((str[h] < 48 || str[h] > 57) && str[h] != 45)
			{
				//printf("not number\n");
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
	int		i[argc-1];
	int		o=0;
	int		num_chunks;
	int 	chunk_size;
	int		**chunks;
	chunk_size = 20;

	//if (checker_num(argc, argv) == 0)
		//return (0);
	stack_a = push_swap(argc, argv);
	stack_b = NULL;
	stack_a->head = stack_a;
	list2array(&stack_a, i);
	/* if (checker_dup(i, argc) == 0)
		return (0); */
	sort_array_ascending(i,argc-1);
	chunks = create_chunk_array(i, argc - 1, chunk_size, &num_chunks);

	/*   printf("\n\n");
		for (int o = 0; o < num_chunks; o++)
	{
		printf("Chunk %d: [", o);
		for (int j = 0; j < chunk_size && o * chunk_size + j < argc - 1; j++)
		{
			printf("%d", chunks[o][j]);
			if (j < chunk_size - 1 && o * chunk_size + j < argc - 1)
			{
				printf(", ");
			}
		}
		printf("]\n\n\n");
	}   */
	
	int l = 0;
    while (l < num_chunks -1) 
	{
	//	printstack(&stack_a, &stack_b);
		//printf("correeeeeeeeeeeeeeeeeeeeeuuuuuuuuuuuu\n");
		utils() ->rep--;
      match_finder(&stack_a, &stack_b, chunks[l], chunk_size);
	  
	  //printstack(&stack_a, &stack_b);
	   while (stack_b)
			pa(&stack_a, &stack_b);
		//printstack(&stack_a, &stack_b);
        l++;
    }

	match_finder(&stack_a, &stack_b, chunks[l], utils() ->i);
	 while (stack_b)
			pa(&stack_a, &stack_b);
	//printstack(&stack_a, &stack_b);
	
	/* while (stack_b)
		pa(&stack_a, &stack_b);
	printstack(&stack_a, &stack_b); */
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
