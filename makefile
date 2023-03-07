# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlima <vlima@student.42lisboa.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 16:40:56 by vlima             #+#    #+#              #
#    Updated: 2023/03/07 15:16:08 by vlima            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = operations1.c operations2.c operations3.c push_swap.c utils.c utils2.c utils3.c push_b.c pushlower.c short_sorter.c push_top.c chunks.c double.c


all:			$(NAME)

$(NAME):		
				$(CC) $(SRC) -o $(NAME) 

clean:
				$(RM) $(NAME)

fclean: 		clean
				

re:		fclean	$(NAME)