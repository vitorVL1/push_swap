/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:26:36 by vlima             #+#    #+#             */
/*   Updated: 2023/02/06 14:27:27 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_node *stack1)
{
	int	i;

	i = 0;
	while (stack1 != NULL)
	{
		stack1 = stack1->next;
		i++;
	}
	return (i);
}

t_node	*ft_lstlast(t_node *lst)
{
	if (lst == NULL)
	{
		return (NULL);
	}
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*last;

	if (!lst || !new)
		return ;
	while (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

int	find_lowest(t_node *stack)
{
	int		lowest;
	t_node	*current;

	current = stack;
	lowest = INT_MAX;
	while (current != NULL)
	{
		if (current->content < lowest)
		{
			lowest = current->content;
		}
		current = current->next;
	}
	return (lowest);
}

void	printstack(t_node **stack1, t_node **stack2)
{
	t_node	*current;
	t_node	*current2;

	current2 = *stack2;
	current = *stack1;
	printf("--------------\n");
	while (current != NULL)
	{
		printf("%d\n", current->content);
		current = current->next;
	}
	while (current2 != NULL)
	{
		if (current2 != 0)
		{
			printf("\t %d \n", current2->content);
			current2 = current2->next;
		}
	}
	printf("--------------\n");
}
