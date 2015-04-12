##
## Makefile for makefile addition in /home/mathie_g/Tek_1_projects/C_prog_elem/Bistromathique/addition
## 
## Made by killian mathieu
## Login   <mathie_g@epitech.net>
## 
## Started on  Tue Mar 31 11:28:58 2015 killian mathieu
## Last update Wed Apr  8 17:54:02 2015 killian mathieu
##

NAME	= calc

SRCS	= main.c \
	  ./addition/addition.c \
	  ./subtraction/subtraction.c

OBJS	= $(SRCS:.c=.o)

LIB	= -lmy -L ./lib/

CC	= cc

RM	= rm -f

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRCS) $(LIB)

clean:
	$(RM) $(OBJS) $(NAME)

fclean: clean
	$(RM) $(OBJS)

re: fclean all

.PHONY: all clean fclean re
