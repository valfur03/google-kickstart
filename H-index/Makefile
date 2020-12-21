# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfurmane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/20 21:47:27 by vfurmane          #+#    #+#              #
#    Updated: 2020/12/21 11:58:09 by vfurmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= $(addprefix srcs/, main.c)
OBJS		= $(SRCS:.c=.o)
INCL		= includes/
NAME		= h-index
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -o $@ -I $(INCL)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $^ -o $@ -I $(INCL)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
