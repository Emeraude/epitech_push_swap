##
## Makefile for push_swap in /home/broggi_t/push_swap
## 
## Made by broggi_t
## Login   <broggi_t@epitech.net>
## 
## Started on  Sat Dec 28 10:15:29 2013 broggi_t
## Last update Mon Jan  6 22:18:45 2014 broggi_t
##

SRCS	= main.c \
	  algo.c \
	  verbose.c \
	  list.c \
	  free_list.c \
	  my_str.c \
	  operations_s.c \
	  operations_p.c \
	  operations_r.c \
	  my_getnbr.c \
	  my_strcmp.c

OBJS	= $(SRCS:.c=.o)

NAME	= push_swap

CFLAGS	+= -W -Wall -Wextra -pedantic

RM	= rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
	cc -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
