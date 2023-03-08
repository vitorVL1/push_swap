/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:25:55 by vlima             #+#    #+#             */
/*   Updated: 2023/03/08 17:45:29 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct node_a
{
	struct node_a	*head;
	int				content;
	struct node_a	*next;
}					t_node;

typedef struct s_utils
{
	int i;
	int rep;
	int *save_array;
}		t_utils;


t_utils *utils(void);

//main operations
void				ft_swap(t_node **stack);
void				ft_rotate(t_node **stack);
void				ft_reverse(t_node **stack);
void				ft_push(t_node **stack1, t_node **stack2);
//main operations

//operations
void				ra(t_node **stack1);
void				rb(t_node **stack2);
void				rr(t_node **stack1, t_node **stack2);
void				pa(t_node **a, t_node **b);
void				pb(t_node **a, t_node **b);
void				rra(t_node **stack1);
void				rrb(t_node **stack2);
void				rrr(t_node **stack1, t_node **stack2);
void				sa(t_node **stack1);
void				sb(t_node **stack2);
void				ss(t_node **stack1, t_node **stack2);
//operations

//sorters
void				push_lower2(t_node **stack1, t_node **stack2);
void				push_lower(t_node **stack1, t_node **stack2);
void				short_sorter(t_node **stack);
void				sorter5(t_node **stack1, t_node **stack2);
//sorters

//utils
void 	double_r (t_node **stack1, t_node **stack2);

int					find_lowest(t_node *stack);
void				ft_lstadd_back(t_node **lst, t_node *new);
t_node				*ft_lstlast(t_node *lst);
void				printstack(t_node **current, t_node **current2);
t_node				*ft_addstack(long value, int argc);
long				ft_atol(const char *str);
void				sort_array_ascending(int *array, int size);
void				list2array(t_node **stack1, int *array);
int					ft_lstsize(t_node *stack1);
void				match_finder(t_node **stack1, t_node **stack2, int *array,
						int size);
void				ft_pushtotop(t_node **stack1, t_node **stack2, int cont);
void				stack_organizer(t_node **stack1, t_node **stack2);
size_t				ft_strlen(const char *str);
int					**create_chunk_array(int *arr, int arr_size, int chunk_size,
						int *num_chunks);

//utils

//stuff
t_node				*push_swap(int argc, char **argv);
//stuff

#endif