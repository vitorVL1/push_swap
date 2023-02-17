/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima <vlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:54:27 by vlima         #+#    #+#             */
/*   Updated: 2023/01/23 15:31:47 by vlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_stack(t_node **stack1, t_node **stack2, int i)
{
	if (i > 0)
	{
		while (i >= 0)
		{
			rb(stack2);
			i--;
		}
	}
	else if (i < 0)
	{
		while (i < 0)
		{
			rrb(stack2);
			i++;
		}
	}
}

void	ft_push_to_top_b(t_node **stack1, t_node **stack2, int pos)
{
	int	h;
	int	i;

	i = 0;
	h = ft_lstsize(*stack2) + 1 - pos;
	if (pos < ((ft_lstsize(*stack2)) / 2))
	{
		while (pos > 1)
		{
			pos--;
			rb(stack2);
			i--;
		}
	}
	else if (pos >= ((ft_lstsize(*stack2)) / 2))
	{
		while (h > 0)
		{
			h--;
			rrb(stack2);
			i++;
		}
	}
	pb(stack1, stack2);
	ft_reverse_stack(stack1, stack2, i);
}

void	stack_mid_organizer(t_node **stack1, t_node **stack2)
{
	t_node	*current;
	t_node	*current2;
	double	div;
	int		pos;
	int		num;

	current = *stack1;
	current2 = *stack2;
	pos = 0;
	div = 1;
	num = current->content;
	/*  if (num < 0)
		num = current->content * -1; */
	//	printf("num:%d\n", num);
	while (pos <= 100 && div > 0) //|| current2 ->content < 0 && num < 0
	{
		//if (current2 ->content != num *-1)
		div = current2->content / num;
		//printf("div:%f\n", div);
		pos++;
		current2 = current2->next;
	}
	ft_push_to_top_b(stack1, stack2, pos);
	//printstack(stack1, stack2);
}

void	negative_organizer(t_node **stack1, t_node **stack2)
{
	t_node	*current1;
	t_node	*current2;
	int		i;
	int		pos;

	current1 = *stack1;
	current2 = *stack2;
	pos = 0;
	i = 0;
	while (current2->content > 0 && current2)
	{
		current2 = current2->next;
		pos++;
	}
	while (current2->content / current1->content < 0 && current2)
	{
		current2 = current2->next;
		pos++;
	}
	while (pos++ != ft_lstsize(*stack2) && i++ < 100000)
		rrb(stack2);
	pb(stack1, stack2);
	ft_reverse_stack(stack1, stack2, i);
}

void	stack_organizer(t_node **stack1, t_node **stack2)
{
	t_node	*current;
	t_node	*current2;

	current = *stack1;
	current2 = *stack2;
	if (current2 == NULL)
		pb(stack1, stack2);
	else if (current->content > current2->content)
		pb(stack1, stack2);
	else if (current->content < ft_lstlast(*stack2)->content)
	{
		pb(stack1, stack2);
		rb(stack2);
	}
	else if (current->content < current2->content
			&& current->content > current2->next->content)
	{
		pb(stack1, stack2);
		sb(stack2);
	}
	else if (current->content < 0)
		negative_organizer(stack1, stack2);
	else
		stack_mid_organizer(stack1, stack2);
}
