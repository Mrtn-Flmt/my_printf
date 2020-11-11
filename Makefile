##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Compilation Makefile for printf
##

MY	=	lib/my/

INC = 	-include ./include/my.h

SRC	=	my_printf.c	\
		my_putchar.c \
		my_put_nbr.c	\
		my_putstr.c	\
		my_printf_char.c	\
		my_printf_str.c	\
		my_printf_nbr.c	\
		my_printf_bin.c

OBJ = $(SRC:.c=.o)

LIB = -L ./lib -lmy

CFLAGS += -Wall -Wextra -g

NAME = libmy.a

$(NAME): $(OBJ)
		gcc -c $(CFLAGS) $(INC) $(SRC)
		ar rc $(NAME) $(OBJ)

all:	$(NAME)

clean:
		rm -f clean $(OBJ)

fclean: clean
		rm -f $(NAME)

re:	fclean all